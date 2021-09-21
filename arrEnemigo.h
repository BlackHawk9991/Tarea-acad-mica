#pragma once
#include "Enemigo.h"

class arrEnemigo {
private:
	Enemigo** arr;
	int n;
public:
	arrEnemigo() {
		n = 0;
		arr = new Enemigo * [n];
	}

	~arrEnemigo() {
		delete[] arr;
	}

	void agregarEnemigo() {
		Enemigo* e = new Enemigo();
		Enemigo** aux = new Enemigo * [n + 1];
		for (int i = 0; i < n; i++) {
			aux[i] = arr[i];
		}
		aux[n] = e;
		n++;
		arr = aux;
	}

	int getN() {
		return n;
	}

	void borrarEnemigo() {
		for (int i = 0; i < n; i++) {
			arr[i]->borrar();
		}
	}

	void moverEnemigo() {
		for (int i = 0; i < n; i++) {
			arr[i]->mover();
		}
	}

	void dibujarEnemigo() {
		for (int i = 0; i < n; i++) {
			arr[i]->dibujar();
		}
	}
};