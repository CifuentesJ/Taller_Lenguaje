/*Para este reto de programación se pide leer la información de 3 arreglos llamados: SUR, CENTRO y NORTE que corresponde a los nombres de X, Y y Z países del sur, centro y norte América, respectivamente. Se pide realizar una solución en lenguaje de programación que permita unir los tres arreglos anteriores, formando un cuarto arreglo llamado AMERICA. Finalmente, se muestre los nombres de todos los países del continente ordenados alfabéticamente de forma ascendente usando el método de ordenamiento de burbuja optimizado.*/

#include <iostream>
#include <string.h>
using namespace std;


int main() {
    int X, Y, Z, j=0;
    string *sur, *centro, *norte, *amer, aux;

    cin>> X >> Y >> Z;
    sur = new string[X];
    centro = new string[Y];
    norte = new string[Z];
    amer = new string[X+Y+Z];
    cin.ignore();
    
    for (int i = 0; i < X; i++){
        getline(cin, sur[i]);
    }
    for (int i = 0; i < Y; i++){
        getline(cin, centro[i]);
    }
    for (int i = 0; i < Z; i++){
        getline(cin, norte[i]);
    }


    for (int i = 0; i < X; i++){
        amer[j] = sur[i];
        j++;
    }
    for (int i = 0; i < Y; i++){
        amer[j] = centro[i];
        j++;
    }
    for (int i = 0; i < Z; i++){
        amer[j] = norte[i];
        j++;
    }


    bool band = true;
    for(int i = 0; i < (j-1) && band; i++){
        band = false;
        for(int k = 0; k < j- 1 - i; k++){
            if(amer[k].compare(amer[k+1]) > 0){
                aux = amer[k];
                amer[k] = amer[k + 1];
                amer[k + 1] = aux;
                band = true;
            }
        }
    }
    
    for (int i = 0; i < j; i++){
        cout << amer[i] << " ";
    }

    return 0;
}