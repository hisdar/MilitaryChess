#ifndef _SOCKET_H_
#define _SOCKET_H_

namespace cn
{
	namespace hisdar
	{
		class Socket
		{
		public:
			Socket();
			virtual ~Socket();

			virtual int connect(const char *pAddr, int port) = 0;
			virtual int close() = 0;
			virtual int write(const char *pData, int length) = 0;
			virtual int read(char *pData, int bufferLength) = 0;
		};
	}
}
#endif

