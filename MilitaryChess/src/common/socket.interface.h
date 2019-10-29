#ifndef _SOCKET_INTERFACE_H_
#define _SOCKET_INTERFACE_H_
#include "common.h"

namespace cn
{
	namespace hisdar
	{
		class DLL_API SocketInterface
		{
		public:
			SocketInterface();
			virtual ~SocketInterface();

			virtual int connect(const char *pAddr, int port) = 0;
			virtual int close() = 0;
			virtual int write(const char *pData, int length) = 0;
			virtual int read(char *pData, int bufferLength) = 0;
		};
	}
}
#endif

