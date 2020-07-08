#include "Cursor.h"
#include "Framework/Input.h"
 

Cursor::Cursor() {}
Cursor::~Cursor() {}

void Cursor::update(Input* in) {

	input = in;

	float mouseX = input->getMouseX();
	float mouseY = input->getMouseY();

	setPosition(mouseX, mouseY);
}