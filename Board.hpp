#pragma once
#include <vector>
#include "Square.h"

class Board
{
public:
    Board(int _rows, int _cols);

    sf::Color getRandomColor() const;
    Square& getSquare(sf::Vector2i position) { return board[position.x][position.y]; }
private:
    int rows;
    int cols;
    std::vector<std::vector<Square>> board;
};