/* 2.	Calcular el elemento mayor de la diagonal principal de una matriz de 8x8, y luego calcular el elemento menor de diagonal secundaria. Imprimir las posiciones en las que se encuentran. Imprimir los elementos que están en las posiciones pares de la matriz (se toma como posiciones pares aquellas donde sumando la fila y columna el resultado da par).*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    srand(time(NULL));
    int mat[8][8], mayPri, menSec, posFMay = 0, posCMay = 0, posFMen = 0, posCMen = 0;
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){        
            mat[i][j] = rand()%101;
        }
    }
    mayPri = mat[0][0];
    menSec = mat[0][7];

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){        
            if(i == j && mat[i][j] > mayPri){
                mayPri = mat[i][j];
                posFMay = i;
                posCMay = j;
            }
            if((i+j) == 7 && mat[i][j] < menSec){
                menSec = mat[i][j];
                posFMen = i;
                posCMen = j;
            }

        }
    }

    cout << "\t\tMatriz completa: " << endl;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){        
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMayor de la principal: " << mayPri << endl;
    cout << "Fila: " << posFMay << "\tColumna: " << posCMay << endl;
    cout << "Menor de la secundaria: " << menSec<< endl;
    cout << "Fila: " << posFMen << "\tColumna: " << posCMen << endl;

    cout << "\tImpresion de las posiciones pares: " << endl;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){        
            if((i+j) % 2 == 0){
                cout << mat[i][j] << "\t";
            }else{
                cout << "\t";
            }    
        }
        cout << endl;
    }

    return 0;
}
