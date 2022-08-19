/*Hacer un programa en C++ que determine el valor de Z. Siendo X la sumatoria de todos los elementos de un vector de 20 posiciones y Y la sumatoria de los cuadrados de dichos números. Cada uno de los elementos serán generados con números aleatorios entre 1 y 10. Imprimir los elementos del arreglo y al terminar imprimir el resultado de la ecuación (Z) con una precisión de 15 decimales. La fórmula de la operación sería:
𝒁=𝒙/𝒚𝟑*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(15);
    srand(time(NULL));

    int X[20];
    double x = 0, y = 0, z;

    for(int i = 0; i < 20; i++){
        X[i] = 1+rand()%10;
        x += X[i]; 
        y = pow(X[i],2);
    }

    z = x / pow(y,3);

    cout<< "\n\nVector: ";
    for(int i = 0; i < 20; i++){
        cout << "(" << X[i] << ") "; 
    }
    cout<< "\n\nEcuación: " << z << endl;

    return 0;
}