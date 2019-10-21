#ifndef _CHESS_BOARD_H_
#define _CHESS_BOARD_H_

#include "chess.station.h"

#define CHESS_BOARD_WIDTH 5
#define CHESS_BOARD_HEIGHT 13

/****************************************************
 * 坐标系：将棋盘划分为13行5列，其中0~5行在上面，7~12行在下面，第6行是前线所在的行
 * 坐标原点 (0, 0)           (0, 4)
 * +----------------------->
 * |
 * |
 * |
 * |
 * |
 * |
 * |
 * |
 *\|/(12, 0)
 ***************************************************/
namespace cn
{
	namespace hisdar
	{

		class ChessBoard
		{
		public:
			ChessBoard();
			virtual ~ChessBoard();

			void init();

		private:
			ChessStation mStations[CHESS_BOARD_WIDTH][CHESS_BOARD_HEIGHT];

		};

	}
}


#endif