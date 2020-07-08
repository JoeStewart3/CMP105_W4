#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject {
public:
	sf::Texture texture;

	Background();
	~Background();

	
	void update(sf::RenderWindow* hwnd, Input* in, float PlayerX, float PlayerY);
};