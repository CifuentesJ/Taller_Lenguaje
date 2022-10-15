/* 4.	Llenar una matriz de NxN con números aleatorios entre 100 y 999. Imprimir si es mayor la suma de la diagonal principal que la secundaria, y así mismo, imprima si es mayor la suma de la triangular superior que la inferior. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    srand(time(NULL));
    int **mat, N, sumPri = 0, sumSec = 0, sumTriSup = 0, sumTriInf = 0;

    cout << "Ingrese las filas: ";
    cin >> N;

    mat = new int*[N];
    for (int i = 0; i < N; i++){
        mat[i] = new int[N];
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            mat[i][j] = 100+rand()%900;
        }   
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(i == j){
                sumPri += mat[i][j];
            }else if((i + j) == N-1){
                sumSec += mat[i][j];
            }else if(i < j){
                sumTriSup += mat[i][j];
            }else if(i > j){
                sumTriInf += mat[i][j];
            }

        }   
    }

    cout << "\t\t Matriz completa" << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << mat[i][j] << "\t";
        }   
        cout << endl;
    }

    (sumPri > sumSec)?cout << "La suma de la diagonal Principal es mayor a la Secundaria" << endl: cout << "La suma de la diagonal Secundaria es mayor a la Principal" << endl;
    (sumTriSup > sumTriInf)?cout << "La suma de la tringular Superior es mayor a la Inferior" << endl: cout << "La suma de la triangular Inferior es mayor a la Superior" << endl;
    
    return 0;
}
