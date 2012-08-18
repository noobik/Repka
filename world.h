#ifndef world_h
#define world_h
#include<vector>
#include"vragi.h"
class world
{
public:
	world();
         void Draw();
	void world_up();
private:
	std::vector<std::vector<char> > m_world;
	std::vector<vrag> m_vragi;

};
#endif                
