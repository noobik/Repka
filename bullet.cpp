#include"vragi.h"
#include"world.h"
#include"gun.h"
#include"bullet.h"
#include<iostream>
bullet::bullet()
{
	b_y=m_y+1;
	b_y=m_x;
	b_symbol='*';
}
void bullet::b_move()
{
	b_y = b_y + 1;
}

int bullet::b_gety()
{
	return b_y;
}

int bullet::b_getx()
{
	return b_x;
}

char bullet::b_gets()
{
	return b_symbol;
}
