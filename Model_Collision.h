#pragma once
class Model_Collision
{
private:
	int radius;
	int positionx;
	int positiony;
public:
	Model_Collision(int, int, int);
	int getPositionx();
	int getPositiony();
	void setPositionx(int);
	void setPositiony(int);
};

