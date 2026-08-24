#pragma once

#include "Piece.hpp"

class Pawn : public Piece
{
public:
    void move() override;
};