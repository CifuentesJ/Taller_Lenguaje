/* Hacer un programa de C++ que permita almacenar N números aleatorios entre 10 y 100. Imprima 
todo el arreglo creado, luego imprimir los valores que estén en las posiciones pares, posteriormente 
convierta cada múltiplo de 3 en 0 y finalmente imprima el vector de forma inversa.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int N;

	cout << "Ingrese N: ";
	cin >> N;

	int* A = new int[N];


	for (int i = 0; i < N; i++) {
		A[i] = 10 + rand() % 91;
	}

	cout << "\nVector: " << endl;
	for (int i = 0; i < N; i++) {
		cout << A[i] << " ";
	}
	
	cout << "\n\nPosiciones pares: " << endl;
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) {
			cout << A[i] << " ";
		}
	}
	cout << "\n\nForma inversa sin mult 3: " << endl;
	for (int i = (N-1); i >= 0; i--) {
		if (A[i] % 3 == 0) {
			A[i] = 0;
		}
		cout << A[i] << " ";
	}

	return 0;
}