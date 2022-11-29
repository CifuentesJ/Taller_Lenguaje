#include <iostream>
#include <string>
using namespace std;

double tempMedia();

int main(){
    int dias;

    cout << "Ingrese los días: ";
    cin >> dias;

    for (int i = 0; i < dias; i++){
        cout << "Promedio temperatura día "<< i+1 << tempMedia() << endl;
    }
    
    return 0;
}

double tempMedia(){
    double max, min;

    cout << "Ingrese la temperatura máxima: ";
    cin >> max;
    cout << "Ingrese la temperatura mínima: ";
    cin >> min;
    return (max + min) / 2.0;
}