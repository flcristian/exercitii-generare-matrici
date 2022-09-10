#include <iostream>
#include <string>

using namespace std;

// Afisare matrice Tip Intreg.

void afisareMatriceInt(int x[100][100], int m, int n, int vi, int vj) {
	for (int i = vi; i <= m; i++) {
		for (int j = vj; j <= n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

// Afisare matrice Tip Caracter.

void afisareMatriceChar(char x[100][100], int m, int n, int vi, int vj) {
	for (int i = vi; i <= m; i++) {
		for (int j = vj; j <= n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
