#pragma once
#include "MyForm.h"
#include "Board.h"
#include "PawnClass.h"
#include "KnightClass.h"
#include "BishopClass.h"
#include "RookClass.h"
#include "QueenClass.h"
#include "KingClass.h"
#include <string>

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