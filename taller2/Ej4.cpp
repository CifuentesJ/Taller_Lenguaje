/*En una entidad bancaria se necesita hacer un programa en C++ que lea la cédula de un cliente e imprima si se le puede hacer un préstamo o no. Sólo se presta a usuarios cuyas cédulas no estén registradas en un arreglo de 25.000 morosos que hay en la central de riegos a nivel nacional. Por ser un arreglo de gran tamaño use el método de búsqueda binaria y método de ordenamiento de inserción directa (baraja). Imprima el vector ordenado antes de hacer la búsqueda. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int morosos[25000], aux, ced, izq = 0, der = 24999, mit = (izq+der)/2;

    for(int i= 0; i < 25000; i++){
        morosos[i] = 3000000+rand()%20000000;
    }

    for(int i = 0; i < 25000; i++){
        for(int j = i; j > 0 && morosos[j] < morosos[j-1]; j--){
            aux = morosos[j-1];
            morosos[j-1] = morosos[j];
            morosos[j ] = aux;
        }
    }

    cout << "Cédulas: ";
    for (int i = 0; i < 25000; i++){
        cout << morosos[i] << " ";
    }

    
    cout << "\n\nIngrese su cédula: ";
    cin >> ced;
    while(ced != morosos[mit] && izq < der){
        if (ced > morosos[mit])
            izq = mit + 1;
        else
            der = mit - 1;
        mit = (izq + der)/2;
    }
    if(morosos[mit] == ced){
        cout << "\nSu cédula está reportada, no se le puede hacer el préstamo.";
    }else{
        cout << "\nSu cédula no aparece reportada, se le puede hacer el préstamo";
    }

    return 0;
}
