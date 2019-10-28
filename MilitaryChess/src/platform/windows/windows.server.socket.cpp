#include <stdio.h>
#include "windows.server.socket.h"

namespace cn
{
	namespace hisdar
	{
		WindowsServerSocket::WindowsServerSocket()
		{
			WORD sockVersion = MAKEWORD(2, 2);
			WSADATA wsaData;
			if (WSAStartup(sockVersion, &wsaData) != 0)
			{
				return;
			}

			//创建套接字  
			slisten = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			if (slisten == INVALID_SOCKET)
			{
				printf("socket error !");
				return;
			}
		}

		WindowsServerSocket::~WindowsServerSocket()
		{
		}

		int WindowsServerSocket::bind(int port)
		{
			//绑定IP和端口  
			sockaddr_in sin;
			sin.sin_family = AF_INET;
			sin.sin_port = htons(port);
			sin.sin_addr.S_un.S_addr = INADDR_ANY;
			int ret = ::bind(slisten, (LPSOCKADDR)&sin, sizeof(sin));
			if (ret == SOCKET_ERROR)
			{
				printf("bind error !");
			}
		}

		int WindowsServerSocket::listen()
		{
			//开始监听
			int ret = ::listen(slisten, 5);
			if (ret == SOCKET_ERROR)
			{
				printf("listen error !");
				return 0;
			}
		}

		int WindowsServerSocket::accept()
		{
			//循环接收数据  
			SOCKET sClient;
			sockaddr_in remoteAddr;
			int nAddrlen = sizeof(remoteAddr);
			char revData[255];
			while (true)
			{
				printf("等待连接...\n");
				sClient = ::accept(slisten, (SOCKADDR *)&remoteAddr, &nAddrlen);
				if (sClient == INVALID_SOCKET)
				{
					printf("accept error !");
					continue;
				}
				printf("接受到一个连接：%s \r\n", inet_ntoa(remoteAddr.sin_addr));
			}
		}

		int WindowsServerSocket::read()
		{

		}

		int WindowsServerSocket::write()
		{

		}

		int WindowsServerSocket::close()
		{

		}
	}
}
