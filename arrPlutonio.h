#pragma once
#include "Plutonio.h"

class arrPlutonio {
private:
	Plutonio** arr;
	int n;

public:
	arrPlutonio() {
		n = 0;
		arr = new Plutonio * [n];
	}

	~arrPlutonio() {
		delete[] arr;
	}

	void agregarPlutonio() {
		Plutonio* p = new Plutonio();
		Plutonio** aux = new Plutonio * [n + 1];
		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}
		aux[n] = p;
		n++;
		arr = aux;

	}

	int getN() {
		return n;
	}

	void borrarP() {
		for (int i = 0; i < n; i++) {
			arr[i]->borrar();
		}
	}

	void dibujarP() {
		for (int i = 0; i < n; i++) {
			arr[i]->dibujar();
		}
	}
};
