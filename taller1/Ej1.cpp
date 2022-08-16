/*Hacer un programa en C++ que permita llenar un vector A de dimensión 10 con los números: 5, 
10, 15, 20, 25, 30, 35, 40, 45, 50 y llenar otro vector B de igual dimensión con los números 30, 27, 
24, 21, 18, 15, 12, 9, 6, 3. Imprimir ambos arreglos.*/

#include <iostream>
using namespace std;

int main() {
	int B[10], A[10], el = 30;

	for (int i = 0; i < 10; i++) {
		A[i] = (i + 1) * 5;
		B[i] = el;
		el -= 3;
	}

	cout << "Vector A: " << endl;
	for (int i = 0; i < 10; i++){
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	cout << "Vector A: " << endl;
	for (int i = 0; i < 10; i++){
		cout << "B[" << i << "] = " << B[i] << endl;
	}
	
	
	return 0;
}