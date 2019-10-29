#ifndef _SERVER_SOCKET_INTERFACE_H_
#define _SERVER_SOCKET_INTERFACE_H_
#include "common.h"

namespace cn
{
	namespace hisdar
	{
		class DLL_API ServerSocketInterface
		{
		public:
			ServerSocketInterface();
			virtual ~ServerSocketInterface();

			virtual int bind(int port) = 0;
			virtual int listen() = 0;
			virtual int accept() = 0;
			virtual int read() = 0;
			virtual int write() = 0;
			virtual int close() = 0;
		};

	}
}

#endif