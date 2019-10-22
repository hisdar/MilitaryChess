#ifndef _SOCKET_H_
#define _SOCKET_H_
#include "common.h"

HISDAR_NAME_SPACE_HEAD
class SocketInterface
{
public:
	SocketInterface();
	virtual ~SocketInterface();

	virtual int connect(const char *pAddr, int port) = 0;
	virtual int close() = 0;
	virtual int write(const char *pData, int length) = 0;
	virtual int read(char *pData, int bufferLength) = 0;
};
HISDAR_NAME_SPACE_TAIL
#endif

