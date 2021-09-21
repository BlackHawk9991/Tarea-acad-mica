#pragma once
#include "Asteroide.h"

class arrAsteroide {
private:
	Asteroide** arr;
	int n;
public:
	arrAsteroide() {
		n = 0;
		arr = new Asteroide * [n];
	}

	~arrAsteroide() {
		delete[] arr;
	}

	void agregarAsteroide() {
		Asteroide* a = new Asteroide();
		Asteroide** aux = new Asteroide * [n + 1];
		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}
		aux[n] = a;
		n++;
		arr = aux;
	}

	int getN() {
		return n;
	}

	void borrarAsteroide() {
		for (int i = 0; i < n; i++) {
			arr[i]->borrar();
		}
	}

	void moverAsteroide() {
		for (int i = 0; i < n; i++) {
			arr[i]->mover();
		}
	}

	void dibujarAsteroide() {
		for (int i = 0; i < n; i++) {
			arr[i]->dibujar();
		}
	}

};