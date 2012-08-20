#include"vragi.h"
#include"bullet.h"
#include"world.h"
#include"gun.h"
#include<iostream>
gun::shot()
{
	for(int i=0;i<20;i++)
		m_bullet.push_back(bullet());
}
