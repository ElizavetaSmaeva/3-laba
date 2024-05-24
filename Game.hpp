#pragma once

#include <SFML/Graphics.hpp>

#include "Board.hpp"
#include "Gem.hpp"
#include "Marker.hpp"

class Game {
private:
	int width_;
	int height_;

public:
	Game(int width, int height);
	Board CreateBoard();
	void Run(Board& board);

};