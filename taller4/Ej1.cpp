/* Determinar la cantidad y el porcentaje de elementos pares e impares de una matriz de NxM. Así como la suma y el promedio de los elementos de la matriz. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    srand(time(NULL));
    int **mat, N, M, contPar = 0, contIm = 0, sum = 0;
    cout << "Ingrese las filas y columnas: ";
    cin >> N >> M;

    mat = new int*[N];
    for (int i = 0; i < N; i++){
        mat[i] = new int[M];
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){        
            mat[i][j] = rand()%101;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){        
            if(mat[i][j] % 2 == 0){
                contPar++;
            }else{
                contIm++;
            }
            sum += mat[i][j];
        }
    }

    cout << "Cantidad de pares: " << contPar << endl;
    cout << "Cantidad de impares: " << contIm << endl;
    cout << "Suma: " << sum << endl;
    cout << "Promedio: " << sum / ((float)N*M) << endl;

    return 0;
}
