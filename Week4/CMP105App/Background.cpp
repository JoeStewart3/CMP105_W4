#include "Background.h"
#include "Level.h"

Background::Background() {}
Background::~Background() {}

void Background::update(sf::RenderWindow* window, Input* input, float PlayerX, float PlayerY) {

	sf::View view;
	view = window->getView();
	//view.setCenter(PlayerX, 337.5);
	window->setView(view);

	
	//if (current x of view < farthest possible x coord of view texture)
	if (input->isKeyDown(sf::Keyboard::D)){
		move(-1, 0);
	}
	if (input->isKeyDown(sf::Keyboard::A)){
		move(1, 0);
	}
	
}

