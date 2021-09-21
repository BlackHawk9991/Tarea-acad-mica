#pragma once
#include <iostream>
#include "Nave.h"

using namespace std;
using namespace System;

class Alien {

private:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int vidas;
public:
	Alien() {
		x = 136;
		y = 26;
		//x = 3;
		//y = 3;

		dx = 4;
		dy = 2;
		ancho = 12;
		alto = 7;
	}

	~Alien() {}

	void borrar() {
		Console::SetCursorPosition(x, y); cout << "            ";
		Console::SetCursorPosition(x, y + 1); cout << "            ";
		Console::SetCursorPosition(x, y + 2); cout << "            ";
		Console::SetCursorPosition(x, y + 3); cout << "            ";
		Console::SetCursorPosition(x, y + 4); cout << "            ";
		Console::SetCursorPosition(x, y + 5); cout << "            ";
		Console::SetCursorPosition(x, y + 6); cout << "            ";

	}

	void mover(char indice) {
		switch (indice) {
		case 'A':
			if (x >= 3) x -= dx; break;

		case 'D':
			if (x + ancho <= 147) x += dx; break;

		case 'W':
			if (y >= 4)	y -= dy; break;

		case 'S':
			if (y + alto <= 32) y += dy; break;
		}
	}

	void dibujar() {
		char b = 92;
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(x, y); cout << "    .  .";
		Console::SetCursorPosition(x, y + 1); cout << "     " << b << "/ ";
		Console::SetCursorPosition(x, y + 2); cout << "    (@@)";
		Console::SetCursorPosition(x, y + 3); cout << " g/" << b << "_)(_/" << b << "e";
		Console::SetCursorPosition(x, y + 4); cout << "g/" << b << "(=--=)/" << b << "e";
		Console::SetCursorPosition(x, y + 5); cout << "    //" << b << b;
		Console::SetCursorPosition(x, y + 6); cout << "   _|  |_";

	}
};