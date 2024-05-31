#pragma once
#include <iostream>


System::String^ FindPiece(int piece_number)
{
    if (piece_number < 100)
    {
        if (piece_number > 10 && piece_number < 20)
        {
            return ".\\Pieces\\BlackPawn.png";
        }
        else if (piece_number > 40 && piece_number < 50)
        {
            return ".\\Pieces\\BlackRook.png"; //BlackRooks
        }
        else if (piece_number > 20 && piece_number < 30)
        {
            return ".\\Pieces\\BlackKnight.png"; //BlackKnights
        }
        else if (piece_number > 30 && piece_number < 40)
        {
            return ".\\Pieces\\BlackBishop.png"; //BlackBishops
        }
        else if (piece_number > 50 && piece_number < 60)
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
        else if (piece_number > 140 && piece_number < 150)
        {
            return ".\\Pieces\\WhiteRook.png"; //WhiteRooks
        }
        else if (piece_number > 120 && piece_number < 130)
        {
            return ".\\Pieces\\WhiteKnight.png"; //WhiteKnights
        }
        else if (piece_number > 130 && piece_number < 140)
        {
            return ".\\Pieces\\WhiteBishop.png"; //WhiteBishops
        }
        else if (piece_number > 150 && piece_number < 160)
        {
            return ".\\Pieces\\WhiteQueen.png"; //WhiteQueen
        }
        else if (piece_number == 161)
        {
            return ".\\Pieces\\WhiteKing.png"; //WhiteKing
        }
    }
}

System::String^ CellNameForCapture(int CapturedPiece)
{
    char tmp[7];
    System::String^ pieceName = FindPiece(CapturedPiece);
    int k = 0;
    for (int i = 14; pieceName[i] != '.'; i++)
    {
        tmp[k] = pieceName[i];
        k++;
    }
    tmp[k] = '\0';
    std::string tmp2 = tmp;
    pieceName = gcnew System::String(tmp2.data());
    System::String^ cellforCapturedPieces;
    if(CapturedPiece > 100)
        cellforCapturedPieces = "CapturedWhite" + pieceName + "s";
    else
        cellforCapturedPieces = "CapturedBlack" + pieceName + "s";
    return cellforCapturedPieces;
}
