#include "View_Keys.h"

bool View_Keys::keyboardPressW() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		return true;
	}
	return false;
}
bool View_Keys::keyboardPressS() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		return true;
	}
	return false;
}
bool View_Keys::keyboardPressA() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		return true;
	}
	return false;
}
bool View_Keys::keyboardPressD() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		return true;
	}
	return false;
}
bool View_Keys::keyboardPressSpace() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		return true;
	}
	return false;
} 
bool View_Keys::keyboardPressP() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {
		return true;
	}
	return false;
}