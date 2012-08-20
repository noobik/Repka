#ifndef world_h
#define world_h
#include<vector>
#include"vragi.h"
#include"bullet.h"
#include"gun.h"
class World
{
public:
	World();
         void Draw();
	void World_up();
private:
	std::vector<std::vector<char> > m_world;
	std::vector<vrag> m_vragi;
	std::vector<bullet> m_bullet;
};

#endif               
 
