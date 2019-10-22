#include <winsock2.h>
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
				return 0;
			}

			//�����׽���  
			SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			if (slisten == INVALID_SOCKET)
			{
				printf("socket error !");
				return 0;
			}
		}

		WindowsServerSocket::~WindowsServerSocket()
		{
		}

		int WindowsServerSocket::bind()
		{
			//��IP�Ͷ˿�  
			sockaddr_in sin;
			sin.sin_family = AF_INET;
			sin.sin_port = htons(8888);
			sin.sin_addr.S_un.S_addr = INADDR_ANY;
			if (bind(slisten, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR)
			{
				printf("bind error !");
			}
		}

		int WindowsServerSocket::listen()
		{
			//��ʼ����  
			if (listen(slisten, 5) == SOCKET_ERROR)
			{
				printf("listen error !");
				return 0;
			}
		}

		int WindowsServerSocket::acceot()
		{
			//ѭ����������  
			SOCKET sClient;
			sockaddr_in remoteAddr;
			int nAddrlen = sizeof(remoteAddr);
			char revData[255];
			while (true)
			{
				printf("�ȴ�����...\n");
				sClient = accept(slisten, (SOCKADDR *)&remoteAddr, &nAddrlen);
				if (sClient == INVALID_SOCKET)
				{
					printf("accept error !");
					continue;
				}
				printf("���ܵ�һ�����ӣ�%s \r\n", inet_ntoa(remoteAddr.sin_addr));
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
