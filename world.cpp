#include<vector>
#include"world.h"
#include<iostream>
World::World()
{
	std::vector<char> vector;
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int i=0;i<20;i++)	
	{
		m_world.push_back(vector);
	}

	std::vector<vrag> en_vector;
	for(int i=0;i<20;i++)
		en_vector.push_back('vrag');
};
void World::Draw()
{
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
		std::cout<<m_world[i][j];
		}
		std::cout<<std::endl;
	}

	for(int i=0;i<20;i++)
		{
		std::cout<<m_world[i][j];
		}
		std::cout<<std::endl;

};	
}





vrag::vrag()
{
void Die();
{

};
void Ap();
{

};
void vdraw();
{

};
}



























