/*En un arreglo de N posiciones se requiere almacenar los NIT de las mejores empresas reconocidas por cumplir con la norma ISO9000. Posteriormente, leer el NIT de una empresa, si se encuentra en el vector imprimir el mensaje "HACERLE RECONOCIMIENTO NACIONAL"; en caso contrario imprimir "EMPRESA DEBE SER VIGILADA". Usar el método de búsqueda secuencial.*/

#include <iostream>
using namespace std;

int main(){
    int *vec, n, clave;
    bool band = false;
    cin >> n;
    vec = new int[n];

    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    cin >> clave;

    for(int i = 0; i < n ; i++){
        if(vec[i] == clave){
            band = true;
            break;
        }
    }

    band?cout<< "HACERLE RECONOCIMIENTO NACIONAL" << endl:cout<<"EMPRESA DEBE SER VIGILADA"<<endl;
    
    return 0;
}