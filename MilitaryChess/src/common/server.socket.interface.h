#ifndef _SERVER_SOCKET_H_
#define _SERVER_SOCKET_H_
#include "common.h"

namespace cn
{
	namespace hisdar
	{
		class ServerSocketInterface
		{
		public:
			ServerSocketInterface();
			virtual ~ServerSocketInterface();

			virtual int bind() = 0;
			virtual int listen() = 0;
			virtual int acceot() = 0;
			virtual int read() = 0;
			virtual int write() = 0;
			virtual int close() = 0;
		};

	}
}

#endif