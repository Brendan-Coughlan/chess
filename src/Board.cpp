#include "Board.hpp"

Board::Board()
{
	Piece* piece = new Rook(Color::White, { 6, 0 });
    for (int i = 0; i < Config::BOARD_SIZE; ++i)
    {
        for (int j = 0; j < Config::BOARD_SIZE; ++j)
        {
            squares[i][j] = nullptr;
        }
    }
	squares[6][0] = piece;
}

Piece* Board::getPiece(Position position) const
{
    return squares[position.rank][position.file];
}

bool Board::movePiece(Position from, Position to)
{
    Piece* piece = getPiece(from);
    if (!piece)
    {
        return false;
    }

    squares[from.rank][from.file] = nullptr;
    squares[to.rank][to.file] = piece;
    piece->setPosition(to);

    return true;
}

void Board::render(sf::RenderWindow& window)
{
    for (int i = 0; i < Config::BOARD_SIZE; ++i)
    {
        for (int j = 0; j < Config::BOARD_SIZE; ++j)
        {
            if (squares[i][j])
            {
                squares[i][j]->render(window);
            }
        }
    }
}