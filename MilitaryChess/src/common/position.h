#ifndef _POSITION_H_
#define _POSITION_H_
namespace cn
{
	namespace hisdar
	{
		class Position
		{
		public:
			Position();
			Position(const Position &src);
			virtual ~Position();

			Position &operator=(const Position &src);
			Position &copyFrom(const Position &src);

			bool equal(int x, int y);
			bool equal(const Position &src);

			int getX();
			int getY();

			void setX(int x);
			void setY(int y);

		protected:
			int mX;
			int mY;
		};
	}
}
#endif