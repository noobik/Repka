#ifndef vragi_h
#define vragi_h
#include<vector>
#include"bullet.h"
#include"world.h"
#include"gun.h"
class vrag
{
public:
	vrag();
	void Move();
	int GetX();
	int GetY();
	char GetS();
private:
	int health;
	int m_x;
	int m_y;
	int m_symbol;
	
}; 

#endif              
