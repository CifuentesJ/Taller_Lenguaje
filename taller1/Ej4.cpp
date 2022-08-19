/*Hacer un programa en C++ que lea 15 números (positivos y negativos) en un arreglo llamado NUM. Determinar la cantidad, suma, promedio y porcentaje de los elementos positivos, el mayor número, el menor número y si existe o no un número múltiplo de 3 y de 5 en los números ingresados.*/

#include <iostream>
using namespace std;

int main(){
    int NUM[15];
    float acum = 0, cont = 0, may, men;
    bool band3 = false, band5 = false;

    cout<< "Ingrese 15 números: ";
    for(int i = 0; i < 15; i++){
        cin>> NUM[i];        
    }

    may = NUM[0];
    men = NUM[0];

    for(int i = 0; i < 15; i++){
        if(NUM[i] % 2 == 0){
            acum += NUM[i];
            cont++;
        }
        if(may > NUM[i]){
            may = NUM[i];
        }
        if(men < NUM[i]){
            men = NUM[i];
        }
        if(NUM[i] % 3 == 0){
            band3 = true;
        }
        if(NUM[i] % 5 == 0){
            band5 = true;
        }
    }

    cout<< "Cantidad positivos: " << cont << endl;
    cout<< "Suma: " << acum << endl;
    cout<< "Promedio de positivos: " << acum/cont << endl;
    cout<< "Porcentaje de positivos: " << (cont/15)*100 << "%" << endl;
    cout<< "Número mayor: " << may << endl;
    cout<< "Número menor: " << men << endl;
    band3?cout<<"Hay número múltiplo de 3."<<endl:cout<<"Hay número múltiplo de 3."<<endl;
    band5?cout<<"Hay número múltiplo de 5."<<endl:cout<<"Hay número múltiplo de 5."<<endl;

    return 0;
}
