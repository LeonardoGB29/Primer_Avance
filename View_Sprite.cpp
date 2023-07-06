#include "View_Sprite.h"
#include <SFML/Graphics.hpp>
View_Sprite::View_Sprite(std::string spriteLocation) {
	texture.loadFromFile(spriteLocation);
	sprite.setTexture(texture);
}
void View_Sprite::spriteSetPosition(int x, int y) {
	sprite.setPosition(x, y);
}
void View_Sprite::spriteDraw(View &ventana){
	ventana.window.draw(sprite);
}