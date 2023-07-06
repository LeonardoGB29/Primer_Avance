#include "Model_Collision.h"
Model_Collision::Model_Collision (int x, int y, int radius) {
	this->positionx = x;
	this->positiony = y;
	this->radius = radius;
}
int Model_Collision::getPositionx() {
	return positionx;
};
int Model_Collision::getPositiony() {
	return positiony;
}
void Model_Collision::setPositionx(int x) {
	positionx = x;
};
void Model_Collision::setPositiony(int y) {
	positiony = y;
};
