#include<vector>
#include"world.h"
World::World()
{
	std::vector<char> vector;
	for(int i=0;i<5;i++)
		vector.push_back('.');
	for(int i=0;i<5;++i)
	{
		m_world.push_back(vector);
	}
};
