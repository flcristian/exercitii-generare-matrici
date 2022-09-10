#include "probleme.h"

// APLICARI PENTRU PROBLEMELE REZOLVATE DIN VARIANTE.

// Aplicare pentru Tip Intreg :

void aplicareInt(int i, int j, int m, int n) {
	int x[100][100];
	variantaStiinte9(x, i, j);
	afisareMatriceInt(x, m, n, i, j);
}

void aplicareChar(int i, int j, int m, int n) {
	char x[100][100];
	variantaStiinte7(x, i, j);
	afisareMatriceChar(x, m, n, i, j);
}