#pragma once
#include "MyForm.h"
#include "Board.h"

ref class Queen {

public:	Queen() {}

protected:	~Queen() {}

public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (!((OldPieceNumber > 150 && OldPieceNumber < 160) || (OldPieceNumber > 50 && OldPieceNumber < 60)))
		{
			return false;
		}

		array<int, 2>^ directions = gcnew array<int, 2> { {1, 1}, { 1, -1 }, { -1, 1 }, { -1, -1 }, { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

		for (int d = 0; d < 8; d++)
		{
			int dx = directions[d, 0];
			int dy = directions[d, 1];

			for (int i = 1; i < 8; i++)
			{
				int newX = OldX + i * dx;
				int newY = OldY + i * dy;

				if (newX < 0 || newX >= 8 || newY < 0 || newY >= 8)
				{
					break;
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
					break;
				}
			}
		}

		return false;
	}

	int IsCheck(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y)
	{
		array<int, 2>^ directions = gcnew array<int, 2> { {1, 1}, { 1, -1 }, { -1, 1 }, { -1, -1 }, { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

		for (int d = 0; d < 8; d++)
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