#pragma once
#include "Contenedor.h"
#include "Figura.h"
class Nivel
{
private:
	int nivel;
	Contenedor* ini = NULL;


public:
	//Constructores
	Nivel() { nivel = 0; ini = NULL; };
	Nivel(int nivel) { this->nivel = nivel; };
	//Sets
	void setNivel(int nivel) { this->nivel = nivel; };
	void setIni(Contenedor* ini) { this->ini = ini; };
	//Gets
	int getNivel() { return nivel; };
	Contenedor* getIni() { return ini; };
	//Metodos
	void LeerNiveles(int archivo, Figura** matriz);
};

