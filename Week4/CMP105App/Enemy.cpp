#pragma once
#include "Enemy.h"
#include <iostream>
#include <string.h>


Enemy::Enemy() {
	velocity.x = 1;
	velocity.y = 1;
}
Enemy::~Enemy() {
}

void Enemy::moveGoomba(float dt, sf::Vector2u windowSize) {

	sf::Vector2f GoombaPos = sf::Transformable::getPosition();
	std::cout << "SCREEN SIZE: " + std::to_string(windowSize.x) + ", " + std::to_string(windowSize.y) + "\n";

	if (GoombaPos.x >= windowSize.x) {
		velocity.x = -1;
	}
	if (GoombaPos.x <= 0.0) {
		velocity.x = 1;
	}
	if (GoombaPos.y >= windowSize.y) {
		velocity.y= -1;
	}
	if (GoombaPos.y <= 0.0) {
		velocity.y = 1;
	}
	
	move(velocity * dt * 750.f);
}


