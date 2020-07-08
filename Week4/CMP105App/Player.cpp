#include "Player.h"

Player::Player() {
	velocity.x = 0;
	velocity.y = 0;
}
Player::~Player() {}

void Player::handleInput(float dt) {


	if (input->isKeyDown(sf::Keyboard::Up) == false && input->isKeyDown(sf::Keyboard::Down) == false && input->isKeyDown(sf::Keyboard::Right) == false && input->isKeyDown(sf::Keyboard::Left) == false) {
		velocity.x = 0;
		velocity.y = 0;
	}
	if (input->isKeyDown(sf::Keyboard::Up)) {
		std::cout << "Up pressed";
		velocity.y = -1;
	}
	if (input->isKeyDown(sf::Keyboard::Down)) {
		std::cout << "Down pressed";
		velocity.y = 1;
	}
	if (input->isKeyDown(sf::Keyboard::Right)) {
		std::cout << "Right pressed";
		velocity.x = 1;
	}
	if (input->isKeyDown(sf::Keyboard::Left)) {
		std::cout << "Left pressed";
		velocity.x = -1;
	}
	move(velocity * dt * 500.f);
}


