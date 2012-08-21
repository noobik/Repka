#ifndef gun_h
#define gun_h
#include<vector>
#include"vragi.h"
#include"bullet.h"
#include"world.h"
class gun
{
public:
	gun();
	bullet * shot(int ix,int iy);
private:	
};

#endif


