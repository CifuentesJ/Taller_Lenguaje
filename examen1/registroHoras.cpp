/*Una empresa tiene un arreglo llamado HORAS de dimensión M donde están los valores de hora de cada uno de sus empleados. Se requiere hacer un programa que permita leer la información del arreglo e imprima:

La cantidad de horas pares y su porcentaje (con 2 decimales)
La cantidad de horas impares y su porcentaje (con 2 decimales)
El total de horas de todos los empleados.
El promedio de horas general.
El mayor número de horas de las posiciones pares junto con su posición.
El menor número de horas de las posiciones impares junto con su posición.*/
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int *horas, M, contPar = 0,contIm = 0, posPar = 0, posIm = 0, acumTot = 0;
    cin >> M;

    horas = new int[M];
    
    for(int i = 0; i < M; i++){
        cin >> horas[i];
    }
    
    int mayPar = 0, menIm = 9999;
    
    for (int i = 0; i<M; i++){
        if(horas[i] % 2 == 0){
            contPar++;
        }else{
            contIm++;
        }
        acumTot += horas[i];
    }
    for (int i = 0; i< M;i++){
        if(i % 2 == 0){
            if(mayPar < horas[i]){
                mayPar = horas[i];
                posPar = i;
            }
        }
        if(i % 2 == 1){
            if(horas[i] < menIm){
                    menIm = horas[i];
                    posIm = i;
                }
        }
    }
    
    cout << contPar << " " << ((float)contPar/M)*100 << "%" << endl;
    cout << contIm << " " << ((float)contIm/M)*100 << "%" << endl;
    cout << acumTot << endl;
    cout << (float)acumTot / M << endl;
    cout << mayPar << " " << posPar  << endl;
    cout << menIm << " " << posIm << endl;
    
    return 0;
}