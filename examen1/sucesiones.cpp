/*Un matemático colombiano tomó la decisión de realizar 10 pruebas con los conceptos de series y sucesiones utilizando 2 vectores A y B de igual dimensión. Para lo cual utilizó la siguiente expresión:

Realizar una solución que permita leer los datos de cada arreglo e imprima cada uno de los términos de la sucesión y el resultado de la serie (sumatoria).*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int acum = 0;
    int* A = new int[10];
    int* B = new int[10];
    int* C = new int[10];


    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < 10; i++) {
        C[i] = pow(A[i], 2) - pow(B[i], 3);
        cout << C[i] << " ";
        acum += C[i];
    }
    cout << endl << acum;
    return 0;
}