/*En el presente semestre llegaron 25 estudiantes para presentar unas pruebas de matemáticas para el ingreso a la Institución Universitaria Salazar y Herrera. Para este problema se requiere ordenar el vector de forma descendente por el método de selección y muestre los 5 mejores y los 5 peores resultados.*/

#include <iostream>
using namespace std;

int main(){
    int vec[25], aux;
    int posMin;

    for (int i = 0; i < 25; i++){
        cin >> vec[i];
    }


    for(int i = 0; i < 24; i++){
        posMin = i;
        for (int j = i+1; j < 25; j++){
            if(vec[j] < vec[posMin]){
                posMin = j;
            }
        }
        aux = vec[posMin];
        vec[posMin] = vec[i];
        vec[i] = aux;        
    }

    
    for (int i = 24; i > 19; i--){
        cout << vec[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 5; i++){
        cout << vec[i] << " ";
    }

    return 0;
}