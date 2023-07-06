#include "View_Sound.h"
#include <SFML/Audio.hpp>

void View_Sound::LoadShotSound() {
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("C:\\Users\\Asus\\Desktop\\project\\Project1\\resources\\sounds\\disparo.wav")) {
        return;
    }
};

void View_Sound::ShotSound() {
    sf::Sound sound;
    sound.setBuffer(bufferLoadShotSound);
    sound.play();
};