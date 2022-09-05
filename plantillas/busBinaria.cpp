#include <iostream>
using namespace std;

int main(){
    int *vec , n, izq = 0, der, mit,clave;
    cin >> n;
    vec = new int[n];
    
    der = n-1;
    mit = (izq+der)/2;

    cin >> clave;

    while(clave != vec[mit] && izq<der){
        if(clave>vec[mit]){
            izq = mit + 1;
        }else{
            der = mit - 1;
        }
        mit = (izq+der)/2;
    }

    if(vec[mit] == clave){
        cout << "Clave existe en posición: " << mit << endl;
    }else{
        cout << "Clave no existe" << endl;
    }
    return 0;
}