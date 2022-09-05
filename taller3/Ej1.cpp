/*En una biblioteca se requiere almacenar los seriales de M libros que son de reserva. Los libros de este tipo son muy valiosos y escasos y no se prestan al público para ser llevados a sus casas. Posteriormente, se pide leer el serial de un libro e imprimir si puede ser prestado a un estudiante o no. En caso de encontrarlo imprimir la posición donde se encuentra. Usar el método de Búsqueda binaria y ordenar por el método de selección directa ascendente.*/

#include <iostream>
using namespace std;


int main() {
    int M, *seriales, aux, posMin;
    cin >> M;
    seriales = new int[M];

    for(int i = 0; i<M; i++){
        cin>> seriales[i];
    }
    
    
    for(int i = 0; i < M-1; i++){
        posMin = i;
        for (int j = i+1; j < M; j++){
            if(seriales[j] < seriales[posMin]){
                posMin = j;
            }
        }
        aux = seriales[posMin];
        seriales[posMin] = seriales[i];
        seriales[i] = aux;        
    }
    
    int clav, izq = 0, der = M-1, mit = (izq+der)/2;
    cin >> clav;
    while(clav != seriales[mit] && izq < der){
        if (clav > seriales[mit])
            izq = mit + 1;
        else
            der = mit - 1;
        mit = (izq + der)/2;
    }
    if(seriales[mit] == clav){
        cout << "NO PUEDE SER PRESTADO. ESTA EN POSICION " << mit << endl;
    }else{
        cout << "PUEDE SER PRESTADO" << endl;
    }
    
    return 0;
}