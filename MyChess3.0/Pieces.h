#pragma once
#include "MyForm.h"
#include "Board.h"
#include <string>

typedef int color;			// 1 - white; 0 - black;

ref class Pawn {
public:
	color pawn;		// pawn moves and captures
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
				if(StartBoardPosition[X, Y] != 0 && (X == OldX - 1 && (Y == OldY + 1 || Y == OldY - 1)))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if (StartBoardPosition[X + 1, Y] > 10 && StartBoardPosition[X + 1, Y] < 20 && X == *SpecX - 1 && Y == *SpecY)
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X + 1, Y]);
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
				if (StartBoardPosition[X, Y] != 0 && (X == OldX + 1 && (Y == OldY + 1 || Y == OldY - 1)))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if (StartBoardPosition[X - 1, Y] > 110 && StartBoardPosition[X - 1, Y] < 120 && X == *SpecX + 1 && Y == *SpecY)
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X - 1, Y]);
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
public:
	color knight;
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (OldPieceNumber > 120 && OldPieceNumber < 130 || OldPieceNumber > 20 && OldPieceNumber < 30)
		{

			if ((X == OldX + 1 && Y == OldY - 2) || (X == OldX + 1 && Y == OldY + 2) || (X == OldX + 2 && Y == OldY - 1) || (X == OldX + 2 && Y == OldY + 1) || (X == OldX + 1 && Y == OldY - 2) || (X == OldX - 1 && Y == OldY - 2) || (X == OldX - 1 && Y == OldY + 2) || (X == OldX - 2 && Y == OldY + 1) || (X == OldX - 2 && Y == OldY - 1))
			{

				if (Board[X, Y] != 0)
				{
					CaptureCellName = CellNameForCapture(Board[X, Y]);
					return true;
				}

				return true;

			}
			return false;
		}
		return false;
	}
};

ref class Bishop {
public:
	color bishop;
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (!((OldPieceNumber > 130 && OldPieceNumber < 140) || (OldPieceNumber > 30 && OldPieceNumber < 40)))
		{
			return false;
		}

		array<int, 2>^ directions = gcnew array<int, 2> { {1, 1}, { 1, -1 }, { -1, 1 }, { -1, -1 } };

		for (int d = 0; d < 4 ; d++)
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

				if (X == newX && Y == newY)
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
};

ref class Rook {
public:
	color rook;
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName, int* wrr, int *wlr, int *brr, int *blr)
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

				if (X == newX && Y == newY)
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

};

ref class Queen {
	color queen;

};

ref class King {
	color king;

};