#ifndef MISSILEGUIDING_H_INCLUDED
#define MISSILEGUIDING_H_INCLUDED

#pragma once

#include <iostream>
#include <vector>
using namespace std;

#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>

#include "tank.h"
#include "graphics.h"
#include "shapes.h"

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4

class MissileGuiding {

public:

	MissileGuiding(int id_in, Tank tank, Tank target, int field[30][30]);
	void startup(Graphics& myGraphics);
	void sceneUpdate(Graphics& myGraphics);
	void render();
	float getX();
	float getY();
	float getZ();
	float getXSize();
	float getYSize();
	float getZSize();
	int getId();
	bool isAlive();

private:

	Cube body;
	int direction;
	float x, y, z;
	float x_size;
	float y_size;
	float z_size;
	float velocity;
	int id;
	bool alive;
	bool goUp;
	bool goDown;
	bool goLeft;
	bool goRight;
	vector<float> x_steps;
	vector<float> z_steps;

};

#endif