/*Se tiene el vector A con 10 elementos. Diseñe una solución en C++ que permita leer sus elementos
y muestre si el vector se encuentra ordenado ascendentemente o no. Imprimir "SI" o "NO". Mostrar
el vector hasta donde iría correcto y donde se “rompe” la secuencia.*/

#include <iostream>
using namespace std;

int main(){
    int A[10], N = 0, sig;
    bool band = false;

    cout<<"Ingrese los 10 números: ";
    for (int i = 0; i < 10; i++){
        cin>> A[i];
    }
    sig = A[0];
    
    for (int i = 1; i < 10; i++){
        if(A[i]<sig){
            band = true;
            break;
        }
        sig = A[i];
        N++;
    }

    
    if(band==true){
        cout<<"\n\nNO"<<"\nVector correcto: ";
        for (int i = 0; i <= N; i++){
            cout << "(" << A[i] << ") ";
        }
        cout<<"\nVector incorrecto: ";
        for (int i = (N+1); i < 10; i++){
            cout << "(" << A[i] << ") ";
        }
    }else{
        cout<<"\n\nSI"<<"\nVector correcto: ";
        for (int i = 0; i < 10; i++){
            cout << "(" << A[i] << ") ";
        }
    }

    return 0;
}