#ifndef _WINDOWS_SOCKET_H_
#define _WINDOWS_SOCKET_H_

#include "../../common/socket.h"

namespace cn
{
	namespace hisdar
	{
		class WindowsSocket :
			public Socket
		{
		public:
			WindowsSocket();
			~WindowsSocket();

			virtual int connect(const char *pAddr, int port);
			virtual int close();
			virtual int write(const char *pData, int length);
			virtual int read(char *pData, int bufferLength);
		};
	}
}

#endif

