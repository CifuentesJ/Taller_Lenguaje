/*Hacer un programa de C++ que permita llenar 2 vectores de M posiciones: uno llamado SUCE con los números 2, 4, 8, 16, 32, 64, 128, 256, 512… y otro llamado FIBO con la secuencia Fibonacci (0, 1, 1, 2, 3, 5, 8, 13...). La serie Fibonacci empieza con 0 y 1, los demás elementos son iguales a la suma de los dos anteriores. Finalmente imprimir los dos arreglos y sus dos series.
Por ejemplo, si M es igual a 5, en el vector SUCE se imprimen los términos 2, 4, 8, 16 y 32 y la serie sería igual a 62; mientras que en el vector FIBO se imprimen los términos 0, 1, 1, 2, 3 y la serie sería igual a 7.*/

#include <iostream>
using namespace std;

int main(){
    int * suce, * fibo, N, num = 2, penUlt = 1, ult = 1, fib = 1, acumF = 1, acumS = 0;
    
    cout<< "Ingrese N: ";
    cin>> N;

    suce = new int[N];
    fibo = new int[N];
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 0; i < N; i++){
        suce[i] = num;
        acumS += num;        
        num *= 2;
        
    }
    for(int i = 2; i < N; i++){
        fibo[i] = fib;  
        acumF += ult;  

        fib = ult + penUlt;
        penUlt = ult;
        ult = fib;
    }

    cout<< "\nSucesión ("<<acumS<<") : ";
    for(int i = 0; i < N; i++){
        cout<< suce[i] << " ";        
    }
    cout<< "\nFibonacci ("<<acumF<<") : ";
    for(int i = 0; i < N; i++){
        cout<< fibo[i] << " ";        
    }
    
    return 0;
}