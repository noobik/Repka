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

	std::vector<char> en_vector;
	for(int i=0;i<20;i++)
         	en_vector.push_back(vrag);
	for(int i=0;i<20;i++)
	{
		std::cout<<vrag();
		
	}
		std::cout<<std::endl;
};
void world::Draw()
{
std::cout<<"начало2"<<std::endl;
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			std::cout<<m_world[i][j];	
		}
		std::cout<<std::endl;
	}
};
void world::world_up()
{std::cout<<"начало3"<<std::endl;
	for(int i=0;i<10;i++)
	{
	m_vragi[i].Move(); //Движение врагов.
	}

std::cout<<"конец 3"<<std::endl;
	std::vector<char> vector; // Очистка игрового поля.
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int i=0;i<20;i++)
		m_world[i] = vector;

	std::vector<int> y_pos;
	for(int i=0;i<10;i++)
		y_pos.push_back(m_vragi[i].get_pos()); // Запоминаем y-позиции врагов.
	std::vector<char> en_vector;
};	





vrag::vrag()
{
	m_y = 0;
	m_x=0;
	health=100;
	m_body='@';
}
void vrag::Move()
{
	m_y = m_y + 1;
}

int vrag::get_pos()
{
	return m_y;
}






























