#ifndef _CHESS_PIECE_H_
#define _CHESS_PIECE_H_

#include "chess.position.h"

namespace cn
{
	namespace hisdar
	{

		typedef enum
		{
			ArmyFlag,             // 军旗
			Commander,            // 司令
			ArmyCommander,        // 军长
			DivisionCommander,    // 师长
			BrigadierCommander,   // 旅长
			RegimentalCommander,  // 团长
			BattalionCommander,   // 营长
			CompanyCommander,     // 连长
			PlatoonLeader,        // 排长
			Engineer,             // 工兵
			Mine,                 // 地雷
			Bomb,                 // 炸弹
			ChessPieceTypeMax
		} ChessPieceType;

		class ChessPiece
		{
		public:
			ChessPiece();
			ChessPiece(const ChessPiece &src);
			virtual ~ChessPiece();

			ChessPiece &operator=(const ChessPiece &src);
			ChessPiece &copyFrom(const ChessPiece &src);

			void           setType(ChessPieceType type);
			void           setId(int id);
			void           setPosition(const Position &src);
			void           setPosition(const ChessPosition &src);
			void           setPosition(int x, int y);

			int            getId();
			ChessPieceType getType();
			const char    *getName();
			ChessPosition &getPosition();

		private:
			int            mId;
			ChessPieceType mType;
			ChessPosition  mPosition;

		};
	}
}

#endif