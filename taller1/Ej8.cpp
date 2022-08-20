/*Se tiene un vector de N posiciones, con números aleatorios entre 100 y 999. Se desea conocer el valor de la siguiente expresión (3 decimales) realizando la raíz cuadrada de la serie que hay a continuación, divida N-1. Aplique conceptos de C++.
√Σ𝑵𝒊=𝟏(𝑿𝒊−𝑿)^2/𝑵−𝟏
Donde, 𝑿𝒊 = cada uno de los elementos del vector
𝑿 = es el promedio del vector y
𝑵 = el tamaño del vector.*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(3);
    srand(time(NULL));

    int N, * vec;
    double sum = 0, prom = 0, acum = 0, ec;

    cout<< "Ingrese N: ";
    cin>> N;

    vec = new int[N];

    for(int i = 0; i < N; i++){
        vec[i] = 100+rand()%900;
        acum += vec[i];
    }
    
    prom = acum / N;
    for(int i = 0; i < N; i++){
        sum += pow((vec[i]-prom),2);
    }
    ec = sqrt(sum / (N-1));

    cout<< "\n\nVector: ";
    for(int i = 0; i < N; i++){
        cout << "(" << vec[i] << ") "; 
    }
    cout<< "\n\nEcuación: " << ec << endl;
    
    return 0;
}