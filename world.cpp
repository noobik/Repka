#include<vector>
#include"world.h"
#include"vragi.h"
#include<iostream>
world::world()
{

	std::vector<char> vector;
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int i=0;i<20;i++)	
	{
		m_world.push_back(vector);
	}

	for(int i=0;i<10;i++)
		m_vragi.push_back(vrag());
};
void world::Draw()
{

	for(int i=0;i<20;i++)
	{
		for(int n=0;n<20;n++)
		{
			std::cout<<m_world[i][n];
		}
		std::cout<<std::endl;
	}
};
void world::world_up()
{
std::cout<< m_vragi.size()<<std::endl;
	for(int i=0;i<10;i++)
	{

	m_vragi[i].Move();
	
	}
	std::vector<char> vector;
	std::vector<int> y_pos;
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int i=0;i<20;i++)
		m_world[i] = vector;
	for(int i=0;i<10;i++)
		y_pos.push_back(m_vragi[i].get_pos());
	this->Draw();
};	





vrag::vrag()
{
	m_y = 0;
}

void vrag::Move()
{
	m_y = m_y + 1;
}

int vrag::get_pos()
{
	return m_y;
}






























