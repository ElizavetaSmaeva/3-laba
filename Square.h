#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
class Square {
public:
    Square(sf::Color _color, sf::Vector2i _position) : color(_color), position(_position) {}
private:
    sf::Color color;
    sf::Vector2i position;
};