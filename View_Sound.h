#pragma once
#include <SFML/Audio.hpp>

class View_Sound
{
private:
	sf::SoundBuffer bufferLoadShotSound;
public:
	void LoadShotSound();
	void ShotSound();
};

