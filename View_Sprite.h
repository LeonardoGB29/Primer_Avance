#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "View.h"
class View_Sprite
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	View_Sprite(std::string);
	void spriteSetPosition(int, int);
	void spriteDraw(&View);
};

