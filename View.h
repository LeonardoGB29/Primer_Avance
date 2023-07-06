#pragma once
#include <SFML/Graphics.hpp>
#include "Model_Character.h"
#include "View_Sprite.h"

class View {
public:
    sf::RenderWindow window;

    View(int width, int height, const std::string& title);
    friend class View_Sprite;
    bool isOpen();
    void close();
    void clear();
    void display();
    bool pollEvent(sf::Event& event);
    void draw(const sf::Drawable& drawable);
    void processEvents();
};