#ifndef WALL_H_INCLUDED
#define WALL_H_INCLUDED

#pragma once

#include <iostream>
#include <vector>
using namespace std;

#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include "shapes.h"
#include "graphics.h"


class Wall {

public:
	Wall();
	Wall(Graphics myGraphics, float x, float y, float z, float x_size, float y_size, float z_size, bool soft); //Initialize wall
	void sceneUpdate(Graphics myGraphics); //Update position
	void render(); // Render wall
	float getX();
	float getY();
	float getZ();
	float getXSize();
	float getYSize();
	float getZSize();

	// get corner position in vector
	glm::vec4 getTopLeft();
	glm::vec4 getTopRight();
	glm::vec4 getBottomLeft();
	glm::vec4 getBottomRight();

private:
	float x_wall;
	float y_wall;
	float z_wall;
	float x_size_wall;
	float y_size_wall;
	float z_size_wall;
	bool soft; //true if wall is destructible
	Cube cube;
	glm::vec4 color_wall;
};

#endif