/*Hacer un programa en C++ que almacene en un arreglo la sucesión: x/1.2, x/1.4, x/1.6, x/1.8... x/11. ¿cuál será la dimensión del arreglo? Imprimir con 2 decimales las respuestas. Por ejemplo, si x vale 5, se imprimen los términos: 4.17, 3.57, 3.13, 2.78, 2.50, 2.27, 2.08, 1.92... Si x vale 20, se imprimen los términos: 16.67, 14.29, 12.50, 11.11, 10.00, 9.09, 8.33, 7.69…*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int N = 0,  x;
    double div = 1.2;

    cout<< "Ingrese X: ";
    cin>> x;

    while(div<11.1){
        
        float *suce = new float[N];
        suce[N] = x / div;

        cout << suce[N] << " ";
        N++;
        div += 0.2;
    }

    
    return 0;
}