#include "Controller_Player.h"
#include "View_keys.h"
#include "View_Sound.h"

//void Controller_PLayer :: Attack_Player() {};

void Controller_Player::Move(){
	View_Keys player;
	View_Sound shot;
	shot.LoadShotSound();

	if (player.keyboardPressW()) {

		if (player.keyboardPressA()) {}
		else if (player.keyboardPressD()) {}
	}
	else if (player.keyboardPressS()) {
		if (player.keyboardPressA()) {}
		else if (player.keyboardPressD()) {}
	}
	if (player.keyboardPressA()) {
		if (player.keyboardPressW()) {}
		else if (player.keyboardPressS()) {}
	}
	else if (player.keyboardPressD()) {
		if (player.keyboardPressW()) {}
		else if (player.keyboardPressS()) {}
	}
	else if (player.keyboardPressSpace()) {
		//bala
		shot.ShotSound();
	}
	else if (player.keyboardPressP()) {
		//disparo triple
	}
}