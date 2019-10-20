#include "chess.station.link.h"

namespace cn
{
	namespace hisdar
	{
		ChessStationLink::ChessStationLink()
		{
			mType = ChessStationLinkTypeMax;
			mOrientation = ChessStationLinkOrientationMax;
		}

		ChessStationLink::ChessStationLink(
			ChessStationLinkType type,
			ChessStationLinkOrientation orientation,
			int srcX, int srcY,
			int tagX, int tagY)
		{
			mType = type;
			mOrientation = orientation;
			mSrcPosition.setPosition(srcX, srcY);
			mTagPosition.setPosition(tagX, tagY);
		}

		ChessStationLink::~ChessStationLink()
		{

		}
	}
}
