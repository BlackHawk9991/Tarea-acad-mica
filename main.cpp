#include <conio.h>
#include "arrAsteroide.h"
#include "arrPlutonio.h"
#include "arrEnemigo.h"
#include "Alien.h"
#include "Nave.h"

int main() {
	srand(time(NULL));
	Console::BackgroundColor = ConsoleColor::Black;
	Console::SetWindowSize(150, 35);
	Console::CursorVisible = false;
	char tecla;

	arrAsteroide* a = new arrAsteroide();
	for (int i = 0; i < 10; i++) {
		a->agregarAsteroide();
	}
	arrPlutonio* p = new arrPlutonio();
	for (int i = 0; i < 100; i++) {
		p->agregarPlutonio();
	}
	arrEnemigo* e = new arrEnemigo();
	for (int i = 0; i < 5; i++) {
		e->agregarEnemigo();
	}

	Alien* A = new Alien();
	Nave* n = new Nave();
	while (true) {
		a->borrarAsteroide();
		e->borrarEnemigo();
		A->borrar();

		a->moverAsteroide();
		e->moverEnemigo();
		if (_kbhit()) {
			tecla = _getch();
			tecla = toupper(tecla);
			A->mover(tecla);
		}

		//n->dibujar();
		p->dibujarP();
		a->dibujarAsteroide();
		e->dibujarEnemigo();
		A->dibujar();

		_sleep(100);
	}

	_getch();
	return 0;
}
