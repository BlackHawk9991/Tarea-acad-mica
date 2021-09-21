#pragma once
#include <iostream>

using namespace std;
using namespace System;

class Plutonio {
private:
	int x, y;
public:
	Plutonio() {
		x = rand() % (147 - 4) + 3;
		y = rand() % (33 - 4) + 3;
	}

	~Plutonio() {}

	void borrar() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x, y); cout << char(4);
	}


};
