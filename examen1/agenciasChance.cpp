/* La agencia de chance tradicional y la agencia alternativa manejan dos arreglos llamados TRADICIONAL y ALTERNATIVA de N y M posiciones, respectivamente, donde guardan los nombres de las loterías que maneja cada una de estas.
Luego de tomar la decisión de fusionarse ambas agencias, se requiere de un programa que permita leer los nombres de las loterias de cada agencia, luego las fusione (unirlas) en un nuevo vector llamado CHANCE y, finalmente, imprima este último arreglo en orden alfabético.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    int a = x + y;
    cin.ignore();
    string* X = new string[x];
    string* Y = new string[y];
    string* AMERICA = new string[a];
    for (int i = 0; i < x; i++) {
        getline(cin, X[i]);
    }

    for (int i = 0; i < y; i++) {
        getline(cin, Y[i]);
    }


    int j = 0;

    for (int i = 0; i < x; i++) {
        AMERICA[j] = X[i];
        j++;
    }
    for (int i = 0; i < y; i++) {
        AMERICA[j] = Y[i];
        j++;
    }



    bool band = true;
    string aux;
    for (int i = 0; i < a && band; i++) {
        band = false;
        for (int j = 0; j < a - i - 1; j++) {
            if (AMERICA[j] > AMERICA[j + 1]) {
                aux = AMERICA[j];
                AMERICA[j] = AMERICA[j + 1];
                AMERICA[j + 1] = aux;
                band = true;
            }
        }
    }

    for (int i = 0; i < a; i++) {
        cout << AMERICA[i] << " ";
    }
    cout << endl;
    return 0;
}