#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Llenado(int *, int);
void Imprimir(int *, int);
int Punto1(int *, int);
int Punto2(int *, int);
int Punto3(int *, int);
int Punto4(int *, int);
int Multiplos(int *, int, int);
int Punto7(int *, int);
int Punto8(int *, int);
double Punto9(int *, int);
double Punto10(int *, int);
void Punto18(int *, int);


int main(){
    srand(time(NULL));
    int *temp, M;
    cout << "Ingrese M: ";
    cin >> M;
    temp = new int[M];

    Llenado(temp, M);
    Imprimir(temp, M);
    cout << "Temperatura máxima positiva: " << Punto1(temp, M) << endl;
    cout << "Temperatura máxima negativa != 0: " << Punto2(temp, M) << endl;
    cout << "Temperatura mínima positiva != 0: " << Punto3(temp, M) << endl;
    cout << "Temperatura mínima negativa != 0: " << Punto4(temp, M) << endl;
    cout << "Cantidad temperaturas pares: " << Multiplos(temp, M, 2)<< endl;
    cout << "Cantidad temperaturas multiplos de 10: " << Multiplos(temp, M, 10)<< endl;
    cout << "Cantidad temperaturas == 0: " << Punto7(temp, M) << endl;
    cout << "Cantidad temperaturas entre -10°C y 10°C: " << Punto8(temp, M) << endl;
    cout << "Porcentaje de temperaturas negativas: " << Punto9(temp, M) << "%" << endl;
    cout << "Porcentaje de temperaturas impares: " << Punto10(temp, M) << "%" << endl;
    cout << "Tempeturas de forma ascendente: " << endl;
    Punto18(temp, M);

    return 0;
}

void Llenado(int * vector, int M){
    for (int i = 0; i < M; i++)
        vector[i] = -20+rand()%221;    
}

void Imprimir(int * vector, int M){
    for (int i = 0; i < M; i++)
        cout << vector[i] << "\t";

    cout << endl;
}

int Punto1(int * vector, int M){
    int may = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] > may)
            may = vector[i];
    }
    
    return may;
}

int Punto2(int * vector, int M){
    int may = -20;
    for (int i = 0; i < M; i++){
        if(vector[i] > may && vector[i] < 0)
            may = vector[i];
    }
    
    return may;
}

int Punto3(int * vector, int M){
    int men = 201;
    for (int i = 0; i < M; i++){
        if(vector[i] < men && vector[i] > 0)
            men = vector[i];
    }
    
    return men;
}

int Punto4(int * vector, int M){
    int men = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] < men)
            men = vector[i];
    }
    
    return men;
}

int Multiplos(int * vector, int M, int num){
    int cont = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] % num == 0)
            cont ++;
    }
    
    return cont;
}

int Punto7(int * vector, int M){
    int cont = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] == 0)
            cont ++;
    }
    
    return cont;
}

int Punto8(int * vector, int M){
    int cont = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] > -11 && vector[i] < 11)
            cont ++;
    }
    
    return cont;
}

double Punto9(int * vector, int M){
    int cont = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] < 0)
            cont ++;
    }
    
    return (double)cont / M * 100 ;
}

double Punto10(int * vector, int M){
    int cont = 0;
    for (int i = 0; i < M; i++){
        if(vector[i] % 2 == 1)
            cont ++;
    }
    
    return (double)cont / M * 100 ;
}

void Punto18(int * vector, int M){
    for(int i = 0; i < M ; i++){
        for (int j = i; j > 0 && vector[j] < vector[j-1]; j--){
                int aux = vector[j-1];
                vector[j-1] = vector[j];
                vector[j] = aux;
        }
    }

    Imprimir(vector, M);
}