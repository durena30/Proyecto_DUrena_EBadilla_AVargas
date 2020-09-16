#include "Contenedor.h"

void Contenedor::InsertarFigura(Figura* f)
{
	if (ini == NULL) {
		ini = f;
		f->setSig(NULL);
	}
	else {
		f->setSig(ini);
		ini = f;
	}
}
void Contenedor::InsertarFinal(Figura* f) {
	Figura* aux;
	if (ini == NULL) {
		ini = f;
	}
	else {
		aux = ini;
		Figura* ult = aux;
		while (aux != NULL) {
			ult = aux;
			aux = aux->getSig();
		}
	}
}
void Contenedor::RecorrerLista() {
	Figura* aux = ini;
	while (aux != NULL) {
		aux->toString();
		cout << endl;
		aux = aux->getSig();
	}
}
Figura* Contenedor::Extraer() {
	if (ini != NULL) {
		Figura* f = ini;
		ini = ini->getSig();
		return f;
	}
	else {
		return NULL;
	}
}