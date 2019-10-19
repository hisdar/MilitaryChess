#ifndef _CHESS_PIECE_H_
#define _CHESS_PIECE_H_

#include "chess.position.h"

namespace cn
{
	namespace hisdar
	{

		typedef enum
		{
			ArmyFlag,             // ����
			Commander,            // ˾��
			ArmyCommander,        // ����
			DivisionCommander,    // ʦ��
			BrigadierCommander,   // �ó�
			RegimentalCommander,  // �ų�
			BattalionCommander,   // Ӫ��
			CompanyCommander,     // ����
			PlatoonLeader,        // �ų�
			Engineer,             // ����
			Mine,                 // ����
			Bomb,                 // ը��
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