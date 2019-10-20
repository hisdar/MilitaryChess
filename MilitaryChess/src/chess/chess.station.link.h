#ifndef _CHESS_STATION_LINK_H_
#define _CHESS_STATION_LINK_H_

#include "chess.position.h"

namespace cn
{
	namespace hisdar
	{
		typedef enum
		{
			ChessStationLinOrientationkLeft,
			ChessStationLinkOrientationLeftTop,
			ChessStationLinkOrientationTop,
			ChessStationLinkOrientationTopRight,
			ChessStationLinkOrientationRight,
			ChessStationLinkOrientationRightBottom,
			ChessStationLinkOrientationBottom,
			ChessStationLinkOrientationBottomLeft,
			ChessStationLinkOrientationMax,
		} ChessStationLinkOrientation;

		typedef enum
		{
			ChessStationLinkTypeHighway,
			ChessStationLinkTypeRailway,
			ChessStationLinkTypeMax,
		} ChessStationLinkType;

		class ChessStationLink
		{
		public:
			ChessStationLink();
			ChessStationLink(
				ChessStationLinkType type,
				ChessStationLinkOrientation orientation,
				int srcX, int srcY,
				int tagX, int tagY);
			virtual ~ChessStationLink();

		private:
			ChessPosition               mSrcPosition;
			ChessPosition               mTagPosition;
			ChessStationLinkOrientation mOrientation;
			ChessStationLinkType        mType;
		};
	}
}

#endif