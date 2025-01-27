#pragma once
#include <iostream>
#include "Entity.h"


class Enemy: public Entity
{
public:
	Enemy();
	~Enemy();
	virtual void move(sf::Clock&);
	virtual int getPoints();
	virtual void print(sf::RenderWindow&);

protected:
	int points;
	bool destroyable = true;
};

