#include "chess.position.h"

namespace cn
{
	namespace hisdar
	{
		ChessPosition::ChessPosition()
		{
			mX = ChessPositionInvalid;
			mY = ChessPositionInvalid;
		}

		ChessPosition::ChessPosition(const ChessPosition &src)
		{
			copyFrom(src);
		}

		ChessPosition::~ChessPosition()
		{

		}

		ChessPosition &ChessPosition::operator=(const ChessPosition &src)
		{
			return copyFrom(src);
		}

		ChessPosition &ChessPosition::copyFrom(const ChessPosition &src)
		{
			if (this == &src)
			{
				return *this;
			}

			Position::copyFrom(src);
			return *this;
		}
	}
}