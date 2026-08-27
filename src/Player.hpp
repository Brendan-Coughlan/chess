#pragma once

#include "Color.hpp"

class Player
{
public:
    explicit Player(Color color);

    Color getColor() const;

private:
    Color color;
};