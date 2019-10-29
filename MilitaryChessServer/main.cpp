#include <stdio.h>
#include <common/log.h>
#include <common/socket.h>
#include <chess/chess.position.h>

using namespace cn::hisdar;

int main(char *argc[], int argv)
{
	LOGI("start\n");

	ServerSocket serverSocket;


	// 创建socket 服务

	// 等待用户连接

	// 连接成功后等待用户选择行为：
	// 1、创建房间
	// 2、加入游戏
	
	// 房间创建成功后，新建一个线程去处理这个房间的事务

	return 0;
}