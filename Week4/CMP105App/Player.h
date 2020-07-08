#pragma once
#include "Framework/GameObject.h"
#include <iostream>

class Player : public GameObject {
public:

	sf::Texture texture;

	Player();
	~Player();

	void handleInput(float dt);

};