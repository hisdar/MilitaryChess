#include <stdio.h>
#include <common/log.h>
#include "windows.server.socket.h"

namespace cn
{
	namespace hisdar
	{
		WindowsServerSocket::WindowsServerSocket()
		{

		}

		WindowsServerSocket::~WindowsServerSocket()
		{
		}

		int WindowsServerSocket::bind(int port)
		{
			WORD sockVersion = MAKEWORD(2, 2);
			WSADATA wsaData;
			if (WSAStartup(sockVersion, &wsaData) != 0)
			{
				return;
			}

			// 创建套接字  
			mSocket = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			if (mSocket == INVALID_SOCKET)
			{
				LOGE("socket error !");
				return;
			}

			//绑定IP和端口  
			sockaddr_in sin;
			sin.sin_family = AF_INET;
			sin.sin_port = htons(port);
			sin.sin_addr.S_un.S_addr = INADDR_ANY;
			int ret = ::bind(mSocket, (LPSOCKADDR)&sin, sizeof(sin));
			if (ret == SOCKET_ERROR)
			{
				LOGE("bind error !");
			}

			return 0;
		}

		int WindowsServerSocket::listen()
		{
			//开始监听
			int ret = ::listen(mSocket, 5);
			if (ret == SOCKET_ERROR)
			{
				LOGE("listen error !");
				return 0;
			}

			return 0;
		}

		int WindowsServerSocket::accept()
		{
			//循环接收数据  
			SOCKET sClient;
			sockaddr_in remoteAddr;
			int nAddrlen = sizeof(remoteAddr);
			while (true)
			{
				LOGE("等待连接...\n");
				sClient = ::accept(mSocket, (SOCKADDR *)&remoteAddr, &nAddrlen);
				if (sClient == INVALID_SOCKET)
				{
					LOGE("accept error !");
					continue;
				}
				LOGE("接受到一个连接：%s \r\n", inet_ntoa(remoteAddr.sin_addr));
			}
		}

		int WindowsServerSocket::read()
		{
			return 0;
		}

		int WindowsServerSocket::write()
		{
			return 0;
		}

		int WindowsServerSocket::close()
		{
			return 0;
		}
	}
}
