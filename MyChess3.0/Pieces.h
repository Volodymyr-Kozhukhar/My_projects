#pragma once
#include "MyForm.h"

System::String ^ FindPiece(int piece_number)
{
    if (piece_number < 100)
    {
        if (piece_number > 10 && piece_number < 19)
        {
            return ".\\Pieces\\BlackPawn.png";
        }
        else if (piece_number == 42 || piece_number == 41)
        {
            return ".\\Pieces\\BlackRook.png"; //BlackRooks
        }
        else if (piece_number == 21 || piece_number == 22)
        {
            return ".\\Pieces\\BlackKnight.png"; //BlackKnights
        }
        else if (piece_number == 31 || piece_number == 32)
        {
            return ".\\Pieces\\BlackBishop.png"; //BlackBishops
        }
        else if (piece_number == 51)
        {
            return ".\\Pieces\\BlackQueen.png"; //BlackQueen
        }
        else if (piece_number == 61)
        {
            return ".\\Pieces\\BlackKing.png"; //BlackKing
        }
    }
    else
    {
        if (piece_number > 110 && piece_number < 119)
        {
            return ".\\Pieces\\WhitePawn.png"; //WhitePawns
        }
        else if (piece_number == 142 || piece_number == 141)
        {
            return ".\\Pieces\\WhiteRook.png"; //WhiteRooks
        }
        else if (piece_number == 121 || piece_number == 122)
        {
            return ".\\Pieces\\WhiteKnight.png"; //WhiteKnights
        }
        else if (piece_number == 131 || piece_number == 132)
        {
            return ".\\Pieces\\WhiteBishop.png"; //WhiteBishops
        }
        else if (piece_number == 151)
        {
            return ".\\Pieces\\WhiteQueen.png"; //WhiteQueen
        }
        else if (piece_number == 161)
        {
            return ".\\Pieces\\WhiteKing.png"; //WhiteKing
        }
    }
}


class Pawn {

};

class Knight {

};

class Bishop {

};

class Rook {

};

class Queen {

};

class King {

};