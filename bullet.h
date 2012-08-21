#ifndef bullet_h
#define bullet_h
#include<vector>
#include"vragi.h"
#include"world.h"
#include"gun.h"

class Bullet
{
public:
	Bullet(int ix,int iy);
	void b_move();
	int b_getx();
	int b_gety();
	char b_gets();
	void world_up();
private:
	
};

#endif

