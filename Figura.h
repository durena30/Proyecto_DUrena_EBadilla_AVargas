#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML\Graphics\CircleShape.hpp>
using namespace std;
using namespace sf;
class Figura
{
private:
	int x;
	int y;
	int r;
	char color;
	Figura* sig = NULL;
public:
	//Constructores
	Figura() { x = 0; y = 0; r = 0; color = 'n'; sig = NULL; }
	Figura(int x, int y, int r, char color) { this->x = x; this->y = y; this->r = r; this->color = color; sig = NULL; }
	//Gets
	int getX() { return x; };
	int getY() { return y; };
	int getR() { return r; };
	Figura* getSig() { return sig; };
	char getColor() { return color; };
	//Sets
	void setX(int x) { this->x = x; };
	void setY(int y) { this->y = y; };
	void setR(int r) { this->r = r; };
	void setSig(Figura* sig) { this->sig = sig; };
	void setColor(char color) { this->color = color; };
	//Metodos
	sf::CircleShape* CrearFigura(int x, int y, char color, int radio);
	void toString();
};

