#include "Nivel.h"
#include <sstream>
void LeerNiveles(int archivo, Figura** matriz) {
	
	
	string ar = archivo + "";
	
	string ruta = "Recursos/"+ar +".txt";
	char const* pal = ruta.c_str();
	FILE* fp = fopen(pal,"w");
	if (fp == NULL) {
		exit(EXIT_FAILURE);
	}
	else {

	}

}

