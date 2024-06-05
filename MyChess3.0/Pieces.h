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
				if(StartBoardPosition[X, Y] != 0 && StartBoardPosition[X, Y] < 100 && (X == OldX - 1 && ((Y == OldY + 1 && OldY + 1 >= 0 && OldY + 1 < 8) || (Y == OldY - 1 && OldY - 1 >= 0 && OldY - 1 < 8))))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if((X + 1) >= 0 && (X + 1) < 8)
				{
					if (StartBoardPosition[X + 1, Y] > 10 && StartBoardPosition[X + 1, Y] < 20 && X == *SpecX - 1 && Y == *SpecY && OldX == X + 1)
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
				if (StartBoardPosition[X, Y] != 0 && StartBoardPosition[X, Y] > 100 && (X == OldX + 1 && ((Y == OldY + 1 && OldY + 1 >= 0 && OldY + 1 < 8) || (Y == OldY - 1 && OldY - 1 >= 0 && OldY - 1 < 8))))
				{
					CaptureCellName = CellNameForCapture(StartBoardPosition[X, Y]);
					return true;
				}
				else if ((X - 1) >= 0 && (X - 1) < 8)
				{
					if (StartBoardPosition[X - 1, Y] > 110 && StartBoardPosition[X - 1, Y] < 120 && X == *SpecX + 1 && Y == *SpecY && OldX == X - 1)
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
		if((X - 1) >= 0 && (X - 1) < 8 && (Y - 1) >= 0 && (Y - 1) < 8)
			if (Board[X - 1, Y - 1] == 61 && OldPieceNumber > 100)
				return 2;
		if((Y + 1) >= 0 && (Y + 1) < 8 && (X - 1) >= 0 && (X - 1) < 8)
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

ref class Knight {
public:
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, System::String^% CaptureCellName)
	{
		if (OldPieceNumber > 120 && OldPieceNumber < 130 || OldPieceNumber > 20 && OldPieceNumber < 30)
		{

			if ((X == OldX + 1 && Y == OldY - 2) || (X == OldX + 1 && Y == OldY + 2) || (X == OldX + 2 && Y == OldY - 1) || (X == OldX + 2 && Y == OldY + 1) || (X == OldX - 1 && Y == OldY - 2) || (X == OldX - 1 && Y == OldY + 2) || (X == OldX - 2 && Y == OldY + 1) || (X == OldX - 2 && Y == OldY - 1))
			{

				if ((OldPieceNumber > 100 && Board[X, Y] < 100) || (OldPieceNumber < 100 && (Board[X, Y] > 100 || Board[X, Y] == 0)))
				{
					if(Board[X, Y] != 0)
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

ref class Bishop {
public:
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

ref class Rook {
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

ref class Queen {
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

ref class King;

bool IsMovePossible(static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, bool moveSide, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% king);

ref class King {
public:
	color king;
	bool CheckForPossibleMove(int OldPieceNumber, static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, bool wasCheck, bool moveSide,System::String^% CaptureCellName, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% Newking, System::Int32^% castling, System::Int32^% wk, System::Int32^% bk, System::Int32^% wrr, System::Int32^% wlr, System::Int32^% brr, System::Int32^% blr)
	{
		if (!((OldPieceNumber == 161) || (OldPieceNumber == 61 )))
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

bool IsMovePossible(static array<int, 2>^ Board, int X, int Y, int OldX, int OldY, bool moveSide, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% king)
{
	int tmpPieceNumber = Board[X, Y];
	Board[X, Y] = Board[OldX, OldY];
	Board[OldX, OldY] = 0;

	int tmp = 0;

	for(int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			if (moveSide == false)
			{
				if (Board[i, j] > 100)
				{
					if (Board[i, j] > 110 && Board[i, j] < 120)
						tmp = pawn.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 120 && Board[i, j] < 130)
						tmp = knight.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 130 && Board[i, j] < 140)
						tmp = bishop.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 140 && Board[i, j] < 150)
						tmp = rook.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 150 && Board[i, j] < 160)
						tmp = queen.IsCheck(Board[i, j], Board, i, j);
				}
			}
			else
			{
				if (Board[i, j] < 100)
				{
					if (Board[i, j] > 10 && Board[i, j] < 20)
						tmp = pawn.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 20 && Board[i, j] < 30)
						tmp = knight.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 30 && Board[i, j] < 40)
						tmp = bishop.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 40 && Board[i, j] < 50)
						tmp = rook.IsCheck(Board[i, j], Board, i, j);
					else if (Board[i, j] > 50 && Board[i, j] < 60)
						tmp = queen.IsCheck(Board[i, j], Board, i, j);
				}
			}
			if (tmp != 0)
			{
				Board[OldX, OldY] = Board[X, Y];
				Board[X, Y] = tmpPieceNumber;
				return false;
			}
		}
	Board[OldX, OldY] = Board[X, Y];
	Board[X, Y] = tmpPieceNumber;
	return true;
}

bool IsPieceAbleToMove(int PieceNumber, static array<int, 2>^ Board, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% king, int OldX, int OldY, bool moveSide)
{
	int* X = new int(0);

	moveSide = !moveSide;

	bool wasCheck = true;
	bool possible = false;

	System::Int32^ Z = 0;
	System::String^ Capture = nullptr;
	System::String^ TmpPieceName = nullptr;
	TmpPieceName = FindPiece(PieceNumber);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (TmpPieceName->IndexOf("Pawn") > 0)
			{
				possible = pawn.CheckForPossibleMove(PieceNumber, Board, i, j, OldX, OldY, Capture, X, X);
				if (possible && (possible = IsMovePossible(Board, i, j, OldX, OldY, !moveSide, pawn, knight, bishop, rook, queen, king)))
					break;
			}
			else if (TmpPieceName->IndexOf("Knight") > 0)
			{
				possible = knight.CheckForPossibleMove(PieceNumber, Board, i, j, OldX, OldY, Capture);
				if (possible && (possible = IsMovePossible(Board, i, j, OldX, OldY, !moveSide, pawn, knight, bishop, rook, queen, king)))
					break;
			}
			else if (TmpPieceName->IndexOf("Bishop") > 0)
			{
				possible = bishop.CheckForPossibleMove(PieceNumber, Board, i, j, OldX, OldY, Capture);
				if (possible && (possible = IsMovePossible(Board, i, j, OldX, OldY, !moveSide, pawn, knight, bishop, rook, queen, king)))
					break;
			}
			else if (TmpPieceName->IndexOf("Rook") > 0)
			{
				possible = rook.CheckForPossibleMove(PieceNumber, Board, i, j, OldX, OldY, Capture, Z, Z, Z, Z);
				if (possible && (possible = IsMovePossible(Board, i, j, OldX, OldY, !moveSide, pawn, knight, bishop, rook, queen, king)))
					break;
			}
			else if (TmpPieceName->IndexOf("Queen") > 0)
			{
				possible = queen.CheckForPossibleMove(PieceNumber, Board, i, j, OldX, OldY, Capture);
				if (possible && (possible = IsMovePossible(Board, i, j, OldX, OldY, !moveSide, pawn, knight, bishop, rook, queen, king)))
					break;
			}
			else if (TmpPieceName->IndexOf("King") > 0)
			{
				possible = king.CheckForPossibleMove(PieceNumber, Board, i, j, OldX, OldY, wasCheck, moveSide , Capture, pawn, knight, bishop, rook, queen, king, Z, Z, Z, Z, Z, Z, Z);
				if (possible && (possible = IsMovePossible(Board, i, j, OldX, OldY, !moveSide, pawn, knight, bishop, rook, queen, king)))
					if(king.IsNextToKing(Board, i, j, OldX, OldY) == false)
						break;
			}
			possible = false;
		}
		if (possible)
			return true;
	}
	return false;
}

int IsMate(System::Int32^% check, static array<int, 2>^ Board, Pawn% pawn, Knight% knight, Bishop% bishop, Rook% rook, Queen% queen, King% king, bool moveSide)
{
	int tmp;
	bool possible = false;

	if (*check == 1)
	{
		tmp = 100;
	}
	else tmp = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (Board[i, j] > (1 + tmp) && Board[i, j] < (100 + tmp))
				if ((possible = IsPieceAbleToMove(Board[i, j], Board, pawn, knight, bishop, rook, queen, king, i, j, moveSide)))
					return 0;
		}
	}
	if (*check == 1)
		return 1;
	else return 2;
}