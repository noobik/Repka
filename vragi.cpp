#include"vragi.h"
#include"bullet.h"
#include"world.h"
#include"gun.h"
#include<iostream>
#include<cstdlib>

vrag::vrag()
{
	srand(time(0));
	m_x=rand()%20;
	m_y=0;
	health=100;
	m_symbol='@';
	m_gun = new gun();
}

bullet * vrag::shot()
{
	return gun->shot( m_y + 1, m_x );
}

void vrag::Move()
{
	m_y = m_y + 1;
}

int vrag::GetY()
{
	return m_y;
}

int vrag::GetX()
{
	return m_x;
}

char vrag::GetS()
{
	return m_symbol;
}
