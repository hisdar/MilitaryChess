#ifndef _WINDOWS_SERVER_SOCKET_H_
#define _WINDOWS_SERVER_SOCKET_H_

#include "../../common/common.h"
#include "../../common/server.socket.interface.h"

namespace cn
{
	namespace hisdar
	{

		class WindowsServerSocket :
			public ServerSocketInterface
		{
		public:
			WindowsServerSocket();
			virtual ~WindowsServerSocket();

			virtual int bind();
			virtual int listen();
			virtual int acceot();
			virtual int read();
			virtual int write();
			virtual int close();
		};

	}
}
#endif
