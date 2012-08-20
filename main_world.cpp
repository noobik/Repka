#include"vragi.h"
#include"bullet.h"
#include"world.h"
#include"gun.h""
#include<iostream>
int main()
{
World myworld;
for(int i=0; i<20; i++)
{

myworld.World_up();
std::cout << std::endl;
usleep(500000);
}
return 0;
}
