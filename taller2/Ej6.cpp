/*En una universidad se tienen un vector llamado LÓGICA de N posiciones y otro ALGORITMOS de M, con el carné de los alumnos que perdieron cada materia. Leer un carné e imprimir si el estudiante: perdió las dos asignaturas, sólo lógica, sólo informática o no perdió ninguna. Usar en el primer vector el método de búsqueda secuencial y para el segundo el método de búsqueda binaria ordenando ascendentemente por el método de burbuja optimizado. Usar el lenguaje de programación C++. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int *log, *alg, car, N, M, aux, izq = 0;
    bool band = true, bandLog, bandAlg;

    cout << "Ingrese los que perdieron en LÓGICA: ";
    cin >> N;
    log = new int[N];
    cout << "Ingrese los que perdieron en ALGORITMOS: ";
    cin >> M;
    int der = M-1, mit = (izq+der)/2;
    alg = new int[M];

    for(int i = 0; i < N; i++){
        log[i] = 100+rand()%201;
    }
    for(int i = 0; i < M; i++){
        alg[i] = 100+rand()%201;
    }

    for(int i = 0; i < M-1 && band; i++){
        band = false;
        for(int j = 0; j < M-1; j++){
            if(alg[j] > alg[j+1]){
                aux = alg[j];
                alg[j] = alg[j+1];
                alg[j+1] = aux;
                band = true;
            }
        }
    }

    cout<< "\nLÓGICA:";
    for(int i = 0; i < N; i++){
        cout<< log[i] << " ";
    }
    cout<< "\nALGORITMOS:";
    for(int i = 0; i < M; i++){
        cout<< alg[i] << " ";
    }
    
    cout << "\n\nIngrese su carné: ";
    cin >> car;
    for(int i = 0; i < N; i++){
        if(car == log[i]){
            bandLog = true;
            break;
        }
    }

    while(car != alg[mit] && izq<der){
        if(car > alg[mit]){
            izq = mit + 1;
        }else{
            der = mit -1;
        }
        mit = (izq+der)/2;
    }
    (alg[mit] == car)? bandAlg = true: bandAlg = false;


    if(bandAlg && bandLog){
        cout << "\n\nEl estudiante ha perdido las dos materias";
    }else if (bandAlg){
        cout << "\n\nEl estudiante perdió Algoritmos";
    }else if(bandLog){
        cout << "\n\nEl estudiante perdió Lógica";
    }else{
        cout << "\n\nEl estudiante no perdió ninguna";
    }
    
    return 0;
}
