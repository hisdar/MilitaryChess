#include "position.h"
namespace cn
{
	namespace hisdar
	{
		Position::Position()
		{
			mX = 0;
			mY = 0;
		}
		
		Position::~Position()
		{
		
		}

		Position::Position(const Position &src)
		{
			copyFrom(src);
		}

		Position &Position::operator=(const Position &src)
		{
			return copyFrom(src);
		}
		
		Position &Position::copyFrom(const Position &src)
		{
			if (this == &src) {
				return *this;
			}

			mX = src.mX;
			mY = src.mX;

			return *this;
		}

		bool Position::equal(int x, int y)
		{
			if (mX != x || mY != y)
			{
				return false;
			}

			return true;
		}
		
		bool Position::equal(const Position &src)
		{
			if (mX != src.mX || mY != src.mY)
			{
				return false;
			}

			return true;
		}

		int Position::getX()
		{
			return mX;
		}
		
		int Position::getY()
		{
			return mY;
		}

		void Position::setX(int x)
		{
			mX = x;
		}
		
		void Position::setY(int y)
		{
			mY = y;
		}

		void Position::setPosition(int x, int y)
		{
			mX = x;
			mY = y;
		}
	}
}