#include "Board.hpp"

Board::Board()
{
    for (int i = 0; i < Config::BOARD_SIZE; ++i)
    {
        for (int j = 0; j < Config::BOARD_SIZE; ++j)
        {
            squares[i][j] = nullptr;
        }
    }

    Position position{ 6, 0 }; // g1

    squares[position.rank][position.file] =
        new Rook(Color::White, position);
}

void Board::createPiece(Piece* piece, Position position)
{
	if (squares[position.rank][position.file] != nullptr)
	{
		delete squares[position.rank][position.file];
	}

	squares[position.rank][position.file] = piece;
}

Piece* Board::getPiece(Position position) const
{
    return squares[position.rank][position.file];
}

bool Board::isValidMove(Position from, Position to) const
{
    Piece* piece = getPiece(from);
    if (!piece)
    {
        return false;
    }

	if (!piece->isValidMove(to))
	{
		return false;
	}

    return true;
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

void Board::drawPieces(sf::RenderWindow& window)
{
    for (int rank = 0; rank < Config::BOARD_SIZE; ++rank)
    {
        for (int file = 0; file < Config::BOARD_SIZE; ++file)
        {
            if (squares[rank][file])
            {
                squares[rank][file]->render(window);
            }
        }
    }
}