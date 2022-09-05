/*En un vector se almacenan las notas de 10 estudiantes de un curso de programación. El docente está interesado en mostrar esas notas de las más baja a la más alta. Usar el método de burbuja e imprimir el vector ordenado de forma ascendente.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(1);

    float nota[10], aux;
    
    for(int i = 0; i < 10; i++){
        cin >> nota[i];
    }

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 9; j++){
            if (nota[j] > nota[j+1]){
                aux = nota[j];
                nota[j] = nota[j+1];
                nota[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout << nota[i] << " ";
    }

    
    return 0;
}