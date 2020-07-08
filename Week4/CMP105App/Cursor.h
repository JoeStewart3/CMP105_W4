#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject {
public:
	sf::Texture texture;

	Cursor();
	~Cursor();

	void update(Input* in);
};