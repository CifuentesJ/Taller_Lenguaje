#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void LlenadoCodigos();
void LlenadoCiudades();
void LlenadoExistencias(int);

int main(){
    LlenadoCiudades();
    LlenadoCodigos();
    
    return 0;
}


void LlenadoCiudades(){
    string Ciudades[6] = {"MEDELLIN", "BOGOTA", "CALI", "BARRANQUILLA", "CARTAGENA", "SANTA MARTA"};
}

void LlenadoCodigos(){
    srand(time(NULL));
    int  N, ** Codigos;
    
    cout << "Ingrese el número de zonas: ";
    cin >> N;

    Codigos = new int*[N];
    for (int i = 0; i < N; i++){
        Codigos[i] = new int[N];
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 6; j++){
         Codigos[i][j] = 100+rand()%900;

        }
    }
    
    cout << "--------------------------" << endl;
    cout << "           CÓDIGOS        " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 6; j++){
            cout << Codigos[i][j] << "\t" ;
        }
        cout << endl;
    }
    cout << "--------------------------" << endl;

    LlenadoExistencias(N);
}

void LlenadoExistencias(int N){
    srand(time(NULL));
    int ** Existencias;

    Existencias = new int*[N];
    for (int i = 0; i < N; i++){
        Existencias[i] = new int[N];
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 6; j++){
         Existencias[i][j] = rand()%100;

        }
    }
    
    cout << "--------------------------" << endl;
    cout << "           EXISTENCIAS        " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 6; j++){
            cout << Existencias[i][j] << "\t" ;
        }
        cout << endl;
    }
    cout << "--------------------------" << endl;

}