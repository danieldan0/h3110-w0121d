#include <cmath>
#include <stdio.h>
#include <iostream>
#include <graphics.cpp>    //will create these files soon :D
#include <interface.cpp>
#define XRES 100
#define YRES 100
#define NUM (XRES * YRES)

int parts[XRES][YRES];

int main()    //just put this here because main() is always needed in cpp
{
};

struct Particle
{
  int vx;
  int vy;
  int type;
  int ctype;
  float temp;
  int tmp;
  int tmp2;
}

class Simulation;

int Simulation::Update
{
  int i;
  for(i = 0; i < NUM; i++)
  {
    //update function will be filled out soon
  }
}

