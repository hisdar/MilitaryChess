#ifndef _WINDOWS_SOCKET_H_
#define _WINDOWS_SOCKET_H_

#include <common/socket.interface.h>

namespace cn
{
	namespace hisdar
	{
		class DLL_API WindowsSocket : public SocketInterface
		{
		public:
			WindowsSocket();
			virtual ~WindowsSocket();

			virtual int connect(const char *pAddr, int port);
			virtual int close();
			virtual int write(const char *pData, int length);
			virtual int read(char *pData, int bufferLength);
		};
	}
}

#endif

