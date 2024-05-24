
#include <SFML/Graphics.hpp> 
#include "Board.hpp"
#include "Game.h"
#include "constants.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace sf;

std::vector<std::vector<int>> grid(GRID_ROWS, std::vector<int>(GRID_COLS, 0));



int main() {
    srand(time(NULL));

    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "GEMS Game");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                int row = event.mouseButton.y / GRID_SIZE;
                int col = event.mouseButton.x / GRID_SIZE;
            }
        }

        window.clear();

        // Draw the grid of colored squares
        for (int i = 0; i < GRID_ROWS; i++) {
            for (int j = 0; j < GRID_COLS; j++) {
                sf::RectangleShape square(sf::Vector2f(GRID_SIZE, GRID_SIZE));
                square.setPosition(j * GRID_SIZE, i * GRID_SIZE);
                // Set color of the square based on grid[i][j]
                window.draw(square);
            }
        }

        window.display();
    }

    return 0;
}