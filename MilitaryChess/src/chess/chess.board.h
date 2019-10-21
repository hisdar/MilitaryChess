#ifndef _CHESS_BOARD_H_
#define _CHESS_BOARD_H_

#include "chess.station.h"

#define CHESS_BOARD_WIDTH 5
#define CHESS_BOARD_HEIGHT 13

/****************************************************
 * ����ϵ�������̻���Ϊ13��5�У�����0~5�������棬7~12�������棬��6����ǰ�����ڵ���
 * ����ԭ�� (0, 0)           (0, 4)
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