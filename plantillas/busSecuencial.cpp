#include <iostream>
using namespace std;

int main(){
    int *vec , n, clave, pos;
    bool band = false;
    cin >> n;
    vec = new int[n];
    cin >> clave;

    for(int i = 0; i < n ; i++){
        if(vec[i] == clave){
            pos = i;
            band = true;
            break;
        }
    }

    band?cout<<"Clave existe. Posición: "<<pos<<endl:cout<<"Clave no existe"<<endl;
    return 0;
}