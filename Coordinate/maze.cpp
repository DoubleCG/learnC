#include <iostream>
#include <stdlib.h>
#include "Person.h"
#include <windows.h>
using namespace std;

void showMap(int map[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (map[i][j] == 1) 
			{
				cout << "#";
			}
			else if (map[i][j] == 0) 
			{
				cout << " ";
			}
			else {
				cout << "P";
			}
		}
		cout << endl;
	}
};

int main(void)
{
	bool out = false;

	int map[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,1,0,0,0,0,1,1},
		{1,0,0,1,1,1,1,0,0,1},
		{1,0,0,0,0,1,1,0,1,1},
		{1,0,1,1,0,0,0,0,0,1},
		{1,1,0,1,1,1,1,0,1,1},
		{0,0,0,0,0,1,0,0,0,1},
		{1,1,0,1,0,1,1,0,1,1},
		{1,1,0,1,0,0,0,0,1,1},
		{1,1,0,1,1,1,1,1,1,1},
	};

	Person p;
	p.setX(2);
	p.setY(9);
	p.setDiraction(0);
	cout << "Person position:  (" << p.getX() <<","<<p.getY()<<")"<< endl;

	while (true) {
		if (p.move(map)) {
			cout << "out" << endl;
			break;
		}
		showMap(map);
		Sleep(100);
		system("cls");
	}

	system("pause");
	return 0;
}