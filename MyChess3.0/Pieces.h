#pragma once
#include "MyForm.h"
#include "Board.h"
#include <string>

typedef int color;			// 1 - white; 0 - black;

ref class Pawn {
public:
	color pawn;
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ StartBoardPosition, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (OldPieceNumber > 100 && OldPieceNumber < 120)
		{
			pawn = 1;
			if (OldX == 6 && pawn == 1)
			{
				for (int i = OldX, j = OldY; i >= OldX - 2; i--)
				{
					if (StartBoardPosition[X, Y] == 0 && X == i && Y == j)
						return true;
				}
			}
			if (pawn == 1)
			{
				if(StartBoardPosition[X, Y] != 0 && (X == OldX - 1 && Y == OldY + 1 || X == OldX - 1 && Y == OldY - 1))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if (StartBoardPosition[X, Y] == 0 && X == OldX - 1 && Y == OldY)
						return true;
				return false;
			}
		}
		else if(OldPieceNumber > 10 && OldPieceNumber < 20)
		{
			pawn = 0;
			if (pawn == 0 && OldX == 1)
			{
				for (int i = OldX, j = OldY; i <= OldX + 2; i++)
				{
					if (StartBoardPosition[X, Y] == 0 && X == i && Y == j)
						return true;
				}
			}
			if (pawn == 0)
			{
				if (StartBoardPosition[X, Y] != 0 && (X == OldX + 1 && Y == OldY + 1 || X == OldX + 1 && Y == OldY - 1))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if (StartBoardPosition[X, Y] == 0 && X == OldX + 1 && Y == OldY)
					return true;
				return false;
			}
		}
	}
};

ref class Knight {
	color knight;

};

ref class Bishop {
	color bishop;

};

ref class Rook {
	color rook;

};

ref class Queen {
	color queen;
};

ref class King {
	color king;

};