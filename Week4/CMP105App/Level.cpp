#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// hide windows cursor
	window->setMouseCursorVisible(false);

	// initialise game objects
	Background.texture.loadFromFile("gfx/Level1_1.png");
	Cursor.texture.loadFromFile("gfx/Icon.png");
	PlayerObject.texture.loadFromFile("gfx/Mushroom.png");
	Goomba.texture.loadFromFile("gfx/Goomba.png");
	Sonic.texture.loadFromFile("gfx/Sonic.png");

	Background.setTexture(&Background.texture);
	Background.setSize(sf::Vector2f(11038, 675));

	Cursor.setTexture(&Cursor.texture);
	Cursor.setSize(sf::Vector2f(50, 50));

	PlayerObject.setTexture(&PlayerObject.texture);
	PlayerObject.setSize(sf::Vector2f(100, 100));
	PlayerObject.setPosition(600, 300);
	PlayerObject.setInput(input);

	Goomba.setTexture(&Goomba.texture);
	Goomba.setSize(sf::Vector2f(100, 100));
	Goomba.setPosition(200, 200);

	Sonic.setTexture(&Sonic.texture);
	Sonic.setSize(sf::Vector2f(100, 100));
	Sonic.setPosition(400, 200);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	
	PlayerObject.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	sf::Vector2f PlayerPos = PlayerObject.getTransform().transformPoint(PlayerObject.getPoint(0));
	sf::Vector2u windowSize = window->getSize();
	Background.update(window, input, PlayerPos.x, PlayerPos.y);
	Goomba.moveGoomba(dt, windowSize);
	Sonic.moveGoomba(dt, windowSize);
	Cursor.update(input);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(Background);
	window->draw(PlayerObject);
	window->draw(Goomba);
	window->draw(Sonic);
	window->draw(Cursor);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color::White);
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}