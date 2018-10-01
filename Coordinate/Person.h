#pragma once
class Person
{
public:
	Person();
	~Person();

	void setX(int x);
	int getX();
	void setY(int y);
	int getY();

	void setLastX(int x);
	int getLastX();
	void setLastY(int y);
	int getLastY();

	void setDiraction(int diraction);
	int getDiraction();


	bool move(int map[10][10]);


private:
	int x;
	int y;
	int lastX;
	int lastY;
	int diraction;
};