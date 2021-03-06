#include<vector>
#include"vragi.h"
#include"bullet.h"
#include"world.h"
#include"gun.h"
#include<iostream>
World::World()
{
	std::vector<char> vector;
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int j=0;j<20;j++)	
	{
		m_world.push_back(vector);
	}
	
	for(int i=0;i<20;i++)
		m_vragi.push_back(vrag());
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
};

void World::World_up()
{
	for(int i=0;i<20;i++)
	{
	m_vragi[i].Move(); //Движение врагов.
	}
	std::vector<char> vector; // Очистка игрового поля.
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int i=0;i<20;i++)
		m_world[i] = vector;

	for(int i=0;i<m_vragi.size();i++) {
		int y = m_vragi[i].GetY(); // Запоминаем y-позиции врагов.
		int x = m_vragi[i].GetX();	
		m_world[y][x] = m_vragi[i].GetS();	
	}
		


	for(int i=0;i<20;i++)
	{
	m_bullet[i].b_move(); //Движение пули.
	}
	std::vector<char> vector; // Очистка игрового поля.
	for(int i=0;i<20;i++)
		vector.push_back('.');
	for(int i=0;i<20;i++)
		m_world[i] = vector;

	for(int i=0;i<m_bullet.size();i++) {
		int iy = m_bullet[i].b_gety(); // Запоминаем y-позиции пули.
		int ix = m_bullet[i].b_getx();	
		m_world[iy][ix] = m_bullet[i].b_gets();	
	}
	this->Draw();	
	
};
void World::Strike()
{
	for(int i=0;i<20;i++)
	m_bullet.push_back(gun);
};




	


