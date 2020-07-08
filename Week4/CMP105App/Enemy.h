#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject {
public:
	sf::Texture texture;

	Enemy();
	~Enemy();

	void moveGoomba(float dt, sf::Vector2u windowSize);
	void setWindow(sf::RenderWindow* hwnd) {window = hwnd;};

protected:
	sf::RenderWindow* window;
};