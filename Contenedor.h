#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Figura.h"
class Contenedor
{
private:
	int x;
	int y;
	bool lleno;
	Figura* ini = NULL;
public:
	//Constructores
	Contenedor() { x = 0; y = 0; lleno = false; ini = NULL; };
	Contenedor(int x, int y, bool lleno) { this->x = x; this->y = y; this->lleno = lleno; }
	//Sets
	void setX(int x) { this->x = x; };
	void setY(int y) { this->y = y; };
	void setLleno(bool lleno) { this->lleno = lleno; };
	void setIni(Figura* ini) { this->ini = ini; };
	//Gets
	int getX() { return x; };
	int getY() { return y; };
	bool getLleno() { return lleno; };
	Figura* getIni() { return ini; };
	//Metodos
	void InsertarFigura(Figura* f);
	void InsertarFinal(Figura* f);
	Figura* Extraer();
	void RecorrerLista();

};

