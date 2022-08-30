/* Se requiere de un programa en C++ que permita imprimir los 10 mejores y los 10 peores resultados de unas pruebas matemáticas realizadas a 250 alumnos. Ordenar el vector de forma descendente por el método de selección. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    float vec[250], aux;
    int posMin;

    for (int i = 0; i < 250; i++){
        vec[i] = rand()%5 + rand()%11 / (double)10;
    }

    cout << "Notas desorganizado: ";
    for (int i = 0; i < 250; i++){
        cout << vec[i] << " ";
    }

    for(int i = 0; i < 249; i++){
        posMin = i;
        for (int j = i+1; j < 250; j++){
            if(vec[j] < vec[posMin]){
                posMin = j;
            }
        }
        aux = vec[posMin];
        vec[posMin] = vec[i];
        vec[i] = aux;        
    }

    cout << "\n\n10 mejores: ";
    for (int i = 249; i > 239; i--){
        cout << vec[i] << " ";
    }
    cout << "\n10 peores: ";
    for (int i = 0; i < 10; i++){
        cout << vec[i] << " ";
    }

    return 0;
}
