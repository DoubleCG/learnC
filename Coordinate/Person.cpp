#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() 
{
	cout << "Person is in the maze" << endl;
}

Person::~Person() 
{
	cout << "Person had gone out the maze" << endl;
}

void Person::setX(int x)
{
	this->x = x;
}
void Person::setY(int y)
{
	this->y = y;
}
int Person::getX()
{
	return this->x;
}
int Person::getY()
{
	return this->y;
}

void Person::setLastX(int lastX)
{
	this->lastX = lastX;
}
void Person::setLastY(int lastY)
{
	this->lastY = lastY;
}
int Person::getLastX()
{
	return this->lastX;
}
int Person::getLastY()
{
	return this->lastY;
}



void Person::setDiraction(int diraction)
{
	this->diraction = diraction;
}

int Person::getDiraction()
{
	return this->diraction;
};




bool Person::move(int map[10][10])
{
	int x = this->x;
	int y = this->y;
	int diraction = this->diraction;

	if (diraction == 0)   //up
	{
		if (map[y][x + 1] == 1)
		{
			if (map[y - 1][x] == 0)
			{
				this->y = y - 1;
			}
			else {
				this->diraction = 3;
			}
		}
		else {
			this->diraction = 1;
			this->x = x + 1;
		}
	}
	else if(diraction ==1 )   // right
	{
		if (map[y+1][x] == 1)
		{
			if (map[y][x+1] == 0)
			{
				this->x = x + 1;
			}
			else {
				this->diraction = 0;
			}
		}
		else
		{
			this->diraction = 2;
			this->y = y + 1;
		}
	}
	else if (diraction == 2)   // down
	{
		if (map[y][x - 1] == 1)
		{
			if (map[y + 1][x] == 0)
			{
				this->y = y + 1;
			}
			else {
				this->diraction = 1;
			}
		}
		else
		{
			this->diraction = 3;
			this->x = x - 1;
		}
	}
	else if(diraction == 3) // left
	{
		if (map[y-1][x] == 1)
		{
			if (map[y][x-1] == 0)
			{
				this->x = x - 1;
			}
			else {
				this->diraction = 2;
			}
		}
		else
		{
			this->diraction = 0;
			this->y = y - 1;
		}
	}

	if (this->x+1 > 9 || this->x-1 < 0 || this->y+1 >9 || this->y-1 < 0)
	{
		return true;
	}
	else
	{
		cout << "Person move from (" << x << "," << y << ") to (" << this->x << "," << this->y << ")" << endl;
		map[y][x] = 0;
		map[this->y][this->x] = 2;
		return false;
	}
}