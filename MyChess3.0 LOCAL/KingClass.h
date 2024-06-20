#pragma once

#include "MyForm.h"
#include "Board.h"
#include "Pieces.h"

ref class King;

bool IsMovePossible(static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, bool moveSide, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% king);

ref class King {

public: King() {}

protected: ~King() {}

private: color king;

public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, bool wasCheck, bool moveSide, System::String^% CaptureCellName, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% Newking, System::Int32^% castling, System::Int32^% wk, System::Int32^% bk, System::Int32^% wrr, System::Int32^% wlr, System::Int32^% brr, System::Int32^% blr)
	{
		if (!((OldPieceNumber == 161) || (OldPieceNumber == 61)))
		{
			return false;
		}

		switch (OldPieceNumber)
		{
		case 161:
			king = 1;
			break;
		case 61:
			king = 0;
			break;
		}

		if ((X == OldX + 1 || X == OldX - 1 || X == OldX) && (Y == OldY + 1 || Y == OldY - 1 || Y == OldY))
		{
			if (((Board[X, Y] > 100 || Board[X, Y] == 0) && OldPieceNumber == 61) || ((Board[X, Y] < 100 || Board[X, Y] == 0) && OldPieceNumber == 161))
			{
				if (Board[X, Y] > 100 || Board[X, Y] < 100 && Board[X, Y] != 0)
				{
					CaptureCellName = CellNameForCapture(Board[X, Y]);
				}

				switch (king)
				{
				case 1:
					*wk = 0;
					break;
				case 0:
					*bk = 0;
					break;
				}

				return true;
			}
		}

		if (X == OldX && ((Y == OldY + 2 && *wk == 1 && *wrr == 1) || (Y == OldY + 2 && *bk == 1 && *brr == 1)) && wasCheck != true)
		{
			if (Board[X, OldY + 1] == 0 && Board[X, OldY + 2] == 0 && IsMovePossible(Board, X, OldY + 1, OldX, OldY, moveSide, pawn, knight, bishop, rook, queen, Newking))
			{
				*castling = 1;
				*wk = 0;
				return true;
			}
		}
		else if (X == OldX && ((Y == OldY - 2 && *wk == 1 && *wlr == 1) || (Y == OldY - 2 && *bk == 1 && *blr == 1)) && wasCheck != true)
		{
			if (Board[X, OldY - 1] == 0 && Board[X, OldY - 2] == 0 && Board[X, OldY - 3] == 0 && IsMovePossible(Board, X, OldY - 1, OldX, OldY, moveSide, pawn, knight, bishop, rook, queen, Newking))
			{
				*bk = 0;
				*castling = 2;
				return true;
			}
		}
		return false;
	}

	bool IsNextToKing(static array<int, 2>^ Board, int X, int Y, int OldX, int OldY)
	{
		int tmpPieceNumber;

		tmpPieceNumber = Board[X, Y];
		Board[X, Y] = Board[OldX, OldY];
		Board[OldX, OldY] = 0;

		array<int, 2>^ directions = gcnew array<int, 2> { {1, 1}, { 1, -1 }, { -1, 1 }, { -1, -1 }, { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

		for (int d = 0; d < 8; d++)
		{

			int newX = X + directions[d, 0];
			int newY = Y + directions[d, 1];

			if (newX >= 0 && newX < 8 && newY >= 0 && newY < 8)
			{
				if (Board[newX, newY] == 161 || Board[newX, newY] == 61)
				{
					if (X != OldX || Y != OldY)
					{
						Board[OldX, OldY] = Board[X, Y];
						Board[X, Y] = tmpPieceNumber;
					}
					return true;
				}
			}
		}
		Board[OldX, OldY] = Board[X, Y];
		Board[X, Y] = tmpPieceNumber;
		return false;


	}
};