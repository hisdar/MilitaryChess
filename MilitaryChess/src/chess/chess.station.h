#ifndef _CHESS_STATION_H_
#define _CHESS_STATION_H_

#include "chess.position.h"

namespace cn
{
	namespace hisdar
	{
		typedef enum 
		{
			MilitaryDepot,     // 兵站
			FieldHeadquarters, // 行营
			Stronghold,        // 大本营
			MountainBoundary,  // 山界
			FrontLine,         // 前线
			ChessStationTypeMax
		} ChessStationType;

		class ChessStation
		{
		public:
			ChessStation();
			virtual ~ChessStation();



		private:

			ChessStationType mType;
			ChessPosition    mPosition;
		};
	}
}
#endif