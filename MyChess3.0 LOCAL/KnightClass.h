#pragma once
#include "MyForm.h"
#include "Board.h"

ref class Knight {

public:	Knight() {}

protected:	~Knight() {}

public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (OldPieceNumber > 120 && OldPieceNumber < 130 || OldPieceNumber > 20 && OldPieceNumber < 30)
		{

			if ((X == OldX + 1 && Y == OldY - 2) || (X == OldX + 1 && Y == OldY + 2) || (X == OldX + 2 && Y == OldY - 1) || (X == OldX + 2 && Y == OldY + 1) || (X == OldX - 1 && Y == OldY - 2) || (X == OldX - 1 && Y == OldY + 2) || (X == OldX - 2 && Y == OldY + 1) || (X == OldX - 2 && Y == OldY - 1))
			{

				if ((OldPieceNumber > 100 && Board[X, Y] < 100) || (OldPieceNumber < 100 && (Board[X, Y] > 100 || Board[X, Y] == 0)))
				{
					if (Board[X, Y] != 0)
						CaptureCellName = CellNameForCapture(Board[X, Y]);
					return true;
				}
			}
			return false;
		}
		return false;
	}

	int IsCheck(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y)
	{
		array<int, 2>^ directions = gcnew array<int, 2> { {1, -2}, { 1, 2 }, { 2, -1 }, { 2, 1 }, { -1, -2 }, { -1, 2 }, { -2, 1 }, { -2, -1 } };

		for (int i = 0; i < 8; i++)
		{
			int newX = X + directions[i, 0];
			int newY = Y + directions[i, 1];
			if (newX >= 0 && newX < 8 && newY >= 0 && newY < 8)
			{
				if (Board[newX, newY] == 161 && OldPieceNumber < 100)
					return 1;
				if (Board[newX, newY] == 61 && OldPieceNumber > 100)
					return 2;
			}
		}
		return 0;
	}
};