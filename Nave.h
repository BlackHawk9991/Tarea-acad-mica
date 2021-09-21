#pragma once
#include <iostream>

using namespace std;
using namespace System;

class Nave {
private:
	int x, y;
	int ancho, alto;
public:
	Nave() {
		x = 2;// del 2 al 18
		y = 2; //2 del 
		ancho = 17;
		alto = 5;
	}

	void dibujar() {
		char c = 34;
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(x, y); cout << "    .-" << c << c << "`" << c << c << "-.    ";
		Console::SetCursorPosition(x, y + 1); cout << " _/`oOoOoOoOo`\_ ";
		Console::SetCursorPosition(x, y + 2); cout << "'.-=-=-=-=-=-=-.'";
		Console::SetCursorPosition(x, y + 3); cout << "  `-=.=-.-=.=-'  ";
		Console::SetCursorPosition(x, y + 4); cout << "     ^  ^  ^     ";
	}
};
