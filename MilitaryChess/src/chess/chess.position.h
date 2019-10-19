#ifndef _CHESS_POSITION_H_
#define _CHESS_POSITION_H_

#include "../common/position.h"

#define ChessPositionInvalid (-1)

namespace cn
{
	namespace hisdar
	{
		class ChessPosition : public Position
		{
		public:
			ChessPosition();
			ChessPosition(const ChessPosition &src);
			virtual ~ChessPosition();

			ChessPosition &operator=(const ChessPosition &src);
			ChessPosition &copyFrom(const ChessPosition &src);


		};
	}
}


#endif
