#include "Figura.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
CircleShape* Figura::CrearFigura(int x, int y, char color, int radio){
	r = radio; this->x = x; this->y = y; this->color = color;
	CircleShape* cs = new CircleShape(radio,25);
	cs->setPosition(x,y);
	if (color == 'r') { cs->setFillColor(Color::Red); }
	if (color == 'b') { cs->setFillColor(Color::Blue); }
	if (color == 'y') { cs->setFillColor(Color::Yellow); }
	if (color == 'm') { cs->setFillColor(Color::Magenta); }
	if (color == 'g') { cs->setFillColor(Color::Green); }
	return cs;
}

void Figura::toString()
{
	cout << "x: " << x + " y: " << y << " color: " << color << " radio: " << r;
}
