#pragma once
#include "MyForm.h"
#include "Board.h"

ref class Rook {

public:	Rook() {}

protected:	~Rook() {}

public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName, System::Int32^% wrr, System::Int32^% wlr, System::Int32^% brr, System::Int32^% blr)
	{
		if (!((OldPieceNumber > 140 && OldPieceNumber < 150) || (OldPieceNumber > 40 && OldPieceNumber < 50)))
		{
			return false;
		}

		array<int, 2>^ directions = gcnew array<int, 2> { {1, 0}, { -1, 0 }, { 0, 1 }, { 0, -1 } };

		for (int d = 0; d < directions->GetLength(0); d++)
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
					switch (Board[X, Y])
					{
					case 41:
						*blr = 0;
						break;
					case 42:
						*brr = 0;
						break;
					case 141:
						*wlr = 0;
						break;
					case 142:
						*wrr = 0;
						break;
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
		array<int, 2>^ directions = gcnew array<int, 2> { {1, 0}, { -1, 0 }, { 0, 1 }, { 0, -1 } };

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
