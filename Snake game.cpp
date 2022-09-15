#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

using namespace std;
	//To finish https://www.javatpoint.com/snake-code-in-cpp
class Snake {
	int p1, p2, v1, v2, e1, e2, prev, now, n, colr, dsp, cnt, dly, m;
	int stp, egGen;
	int xr, yr;
	
	void Caught();
	public
		long scr;
	int strX, strY, endX, endY;
	int pos[100][2];

	void show();
	void init();
	void egg();
	void tranpose();
	void gnrtCond();
	void gnrtUnCond();
	void check();
	void checkEgg();
	void move();
	void chngDir();
	void sendEt();
	void sendCtg();
	
	int test();
	void score();
	Snake();
	Snake(Snake*);
	~Snake();
};
Snake::Snake()
{}
Snake::~Snake()
{}
void Snake::checkEgg()
{
	if ((e1 == p1) && (e2 == p2))
	{
		sendEt();
		egg();
		dly--;
		score();
		n++;
	}
}
void Snake::sendEt()
{
	nosound();
	sound(2500);
	delay(2);
	nosound();
}
void Snake::sendCtg()
{
	nosound();
}