#pragma once
#ifndef_OBSTACLE_
#define_OBSTACLE_
#include "DisplayObject.h"

class Obstacle : public DisplayObject
{
public:
	// constructors
	Obstacle();

	//destructor
	~Obstacle();

	// life cycle functions
	void draw() override;
	void update() override;
	void clean() override;
private:

};

#endif