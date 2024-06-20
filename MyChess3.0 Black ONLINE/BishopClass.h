#pragma once
#include "MyForm.h"
#include "Board.h"

ref class Bishop {

public:	Bishop() {}

protected:	~Bishop() {}

public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (!((OldPieceNumber > 130 && OldPieceNumber < 140) || (OldPieceNumber > 30 && OldPieceNumber < 40)))
		{
			return false;
		}

		array<int, 2>^ directions = gcnew array<int, 2> { {1, 1}, { 1, -1 }, { -1, 1 }, { -1, -1 } };

		for (int d = 0; d < 4; d++)
		{
			int dx = directions[d, 0];
			int dy = directions[d, 1];

			for (int i = 1; i < 8; i++)
			{
				int newX = OldX + i * dx;
				int newY = OldY + i * dy;

				if (newX < 0 || newX >= 8 || newY < 0 || newY >= 8)
				{
					break; // Borders of the matrix
				}

				if (X == newX && Y == newY && ((OldPieceNumber > 100 && (Board[newX, newY] < 100 || Board[newX, newY] == 0)) || (OldPieceNumber < 100 && (Board[newX, newY] > 100 || Board[newX, newY] == 0))))
				{
					if (Board[newX, newY] != 0)
					{
						CaptureCellName = CellNameForCapture(Board[newX, newY]);
					}
					return true;
				}

				if (Board[newX, newY] != 0)
				{
					break; // Other piece on da way
				}
			}
		}

		return false;
	}

	int IsCheck(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y)
	{
		array<int, 2>^ directions = gcnew array<int, 2> { {1, 1}, { 1, -1 }, { -1, 1 }, { -1, -1 } };

		for (int d = 0; d < 4; d++)
		{
			int dx = directions[d, 0];
			int dy = directions[d, 1];

			for (int i = 1; i < 8; i++)
			{
				int newX = X + i * dx;
				int newY = Y + i * dy;

				if (newX >= 0 && newX < 8 && newY >= 0 && newY < 8)
				{
					if (Board[newX, newY] != 0 && Board[newX, newY] != OldPieceNumber)
					{
						if (Board[newX, newY] == 161 && OldPieceNumber < 100)
							return 1;
						if (Board[newX, newY] == 61 && OldPieceNumber > 100)
							return 2;
						break;
					}
				}
			}
		}
		return 0;
	}
};