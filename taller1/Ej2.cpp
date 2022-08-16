/*Llenar e imprimir un vector de 20 posiciones con 1 y 0 de manera intercalada, teniendo en cuenta 
que los ceros estarán ubicados en las posiciones pares y los unos en las impares. Usar conceptos 
de C++.*/

#include <iostream>
using namespace std;

int main() {
	int A[20];

	for (int i = 0; i < 20; i++) {
		if (i % 2 == 0) {
			A[i] = 0;
		}
		else {
			A[i] = 1;
		}
	}

	cout << "Vector A: " << endl;
	for (int i = 0; i < 20; i++) {
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	
	return 0;
}