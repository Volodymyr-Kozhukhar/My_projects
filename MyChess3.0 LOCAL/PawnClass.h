#pragma once
#include "MyForm.h"
#include "Board.h"

typedef int color;			// 1 - white; 0 - black;

ref class Pawn {

public: Pawn() {}

protected:	~Pawn() {}

private: color pawn;		// pawn moves and captures

public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ StartBoardPosition, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName, int* SpecX, int* SpecY)
	{	// true - possible move;  false - unpossible move;

		if (OldPieceNumber > 100 && OldPieceNumber < 120)
		{
			pawn = 1;

			if (OldX == 6 && pawn == 1)
			{
				for (int i = OldX, j = OldY; i >= OldX - 2; i--)
				{
					if (StartBoardPosition[X, Y] == 0 && X == i && Y == j)
					{
						if (StartBoardPosition[OldX - 1, OldY] != 0)
						{
							return false;
						}
						if (X == OldX - 2)
						{
							*SpecX = X;
							*SpecY = Y;
						}
						return true;
					}
				}
			}

			if (pawn == 1)
			{
				if (StartBoardPosition[X, Y] != 0 && StartBoardPosition[X, Y] < 100 && (X == OldX - 1 && ((Y == OldY + 1 && OldY + 1 >= 0 && OldY + 1 < 8) || (Y == OldY - 1 && OldY - 1 >= 0 && OldY - 1 < 8))))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if ((X + 1) >= 0 && (X + 1) < 8)
				{
					if (StartBoardPosition[X + 1, Y] > 10 && StartBoardPosition[X + 1, Y] < 20 && X == *SpecX - 1 && Y == *SpecY && OldX == X + 1 && (OldY == Y + 1 || OldY == Y - 1))
					{
						CaptureCellName = CellNameForCapture(StartBoardPosition[X + 1, Y]);
						return true;
					}
				}
				if (StartBoardPosition[X, Y] == 0 && X == OldX - 1 && Y == OldY)
					return true;
				return false;
			}
		}

		else if (OldPieceNumber > 10 && OldPieceNumber < 20)
		{
			pawn = 0;

			if (pawn == 0 && OldX == 1)
			{
				for (int i = OldX, j = OldY; i <= OldX + 2; i++)
				{
					if (StartBoardPosition[X, Y] == 0 && X == i && Y == j)
					{
						if (StartBoardPosition[OldX + 1, OldY] != 0)
						{
							return false;
						}
						if (X == OldX + 2)
						{
							*SpecX = X;
							*SpecY = Y;
						}
						return true;
					}
				}
			}

			if (pawn == 0)
			{
				if (StartBoardPosition[X, Y] != 0 && StartBoardPosition[X, Y] > 100 && (X == OldX + 1 && ((Y == OldY + 1 && OldY + 1 >= 0 && OldY + 1 < 8) || (Y == OldY - 1 && OldY - 1 >= 0 && OldY - 1 < 8))))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if ((X - 1) >= 0 && (X - 1) < 8)
				{
					if (StartBoardPosition[X - 1, Y] > 110 && StartBoardPosition[X - 1, Y] < 120 && X == *SpecX + 1 && Y == *SpecY && OldX == X - 1 && (OldY == Y + 1 || OldY == Y - 1))
					{
						CaptureCellName = CellNameForCapture(StartBoardPosition[X - 1, Y]);
						return true;
					}
				}
				if (StartBoardPosition[X, Y] == 0 && X == OldX + 1 && Y == OldY)
					return true;
				return false;
			}
		}
	}

	int IsCheck(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y)
	{
		if ((X - 1) >= 0 && (X - 1) < 8 && (Y - 1) >= 0 && (Y - 1) < 8)
			if (Board[X - 1, Y - 1] == 61 && OldPieceNumber > 100)
				return 2;
		if ((Y + 1) >= 0 && (Y + 1) < 8 && (X - 1) >= 0 && (X - 1) < 8)
			if (Board[X - 1, Y + 1] == 61 && OldPieceNumber > 100)
				return 2;
		if ((X + 1) >= 0 && (X + 1) < 8 && (Y - 1) >= 0 && (Y - 1) < 8)
			if (Board[X + 1, Y - 1] == 161 && OldPieceNumber < 100)
				return 1;
		if ((X + 1) >= 0 && (X + 1) < 8 && (Y + 1) >= 0 && (Y + 1) < 8)
			if (Board[X + 1, Y + 1] == 161 && OldPieceNumber < 100)
				return 1;
		return 0;
	}
};