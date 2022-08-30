/*Ordenar de forma ascendente un vector donde se encuentran almacenadas las notas de 10 estudiantes. Usar el método de burbuja e imprimir el vector ordenado. Usar el lenguaje de programación C++. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    float vec[10], aux;
    bool band = true;

    for (int i = 0; i < 10; i++){
        vec[i] = rand()%5 + rand()%11 / (double)10;
    }
    

    cout << "Vector desorganizado: ";
    for (int i = 0; i < 10; i++){
        cout << vec[i] << " ";
    }

    for(int i = 0; i < 9 && band; i++){
        band = false;
        for(int j = 0; j < 9 - i; j++){
            if(vec[j] > vec[j+1]){
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
                band = true;
            }
        }
    }


    cout << "\n\nVector organizado: ";
    for (int i = 0; i < 10; i++){
        cout << vec[i] << " ";
    }

    return 0;
}
