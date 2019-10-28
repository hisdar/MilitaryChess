#ifndef _WINDOWS_SERVER_SOCKET_H_
#define _WINDOWS_SERVER_SOCKET_H_

#include <winsock2.h>
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

			virtual int bind(int port);
			virtual int listen();
			virtual int accept();
			virtual int read();
			virtual int write();
			virtual int close();

		private:
			SOCKET slisten;
		};

	}
}
#endif
