#ifndef _CHESS_STATION_H_
#define _CHESS_STATION_H_

#include "chess.position.h"

namespace cn
{
	namespace hisdar
	{
		typedef enum 
		{
			MilitaryDepot,     // ��վ
			FieldHeadquarters, // ��Ӫ
			Stronghold,        // ��Ӫ
			MountainBoundary,  // ɽ��
			FrontLine,         // ǰ��
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