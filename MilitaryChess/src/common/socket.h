#ifndef _SOCKET_H_
#define _SOCKET_H_

#ifdef _MSC_VER
#include <platform/windows/windows.socket.h>
#include <platform/windows/windows.server.socket.h>

#define Socket WindowsSocket
#define ServerSocket WindowsServerSocket
#endif

#endif