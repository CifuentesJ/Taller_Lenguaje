/* 3.	Llenar una matriz de 6x6 números aleatorios entre 10 y 99. Determinar la suma de las filas impares y la cantidad de elementos impares que hay en las filas pares. Leer un número, buscarlo e imprimir si existe o no. En caso de encontrarlo, imprimir la posición o coordenada en la que se encuentra (fila y columna). */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    srand(time(NULL));
    int mat[6][6], clave, sumFIm = 0, contIm = 0, posF = 0, posC = 0;
    bool band = false;
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){        
            mat[i][j] = 10+rand()%90;
        }
    }

    cout << "Ingrese el número a buscar: ";
    cin >> clave;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if(i % 2 == 1){
                sumFIm += mat[i][j];
            }else if(mat[i][j] % 2 == 1){
                contIm += 1;
            }

            if(clave == mat[i][j]){
                posF = i;
                posC = j;
                band = true;
            }
        }
    }

    cout << "\t\tMatriz completa: " << endl;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){        
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSuma de las filas impares: " << sumFIm << endl;
    cout << "Cantidad de elementos impares en filas pares: " << contIm << endl;
    band? cout<< "Si existe": cout << "No existe";
    cout << "\nFila: " << posF << "\tColumna: " << posC << endl;


    return 0;
}
