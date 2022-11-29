#include <iostream>
#include <cmath>
using namespace std;
 
double Calculadora(char);

int main(){
    char opcion;

    cout << "A-Suma\nB-Resta\nC-División\nE-Multiplicación\nF-Potencia número1número2\nG-Potencia número2número1\n" << endl;
    cin >> opcion;

    cout << "Operación: " << Calculadora(opcion);
    
    return 0;
}

double Calculadora(char opc){
    double n1, n2;
    cout << "Ingrese #1: ";
    cin >> n1;
    cout << "Ingrese #2: ";
    cin >> n2;

    switch (opc){
        case 'A': // Suma
            return n1 + n2;
            break;
        case 'B': // Resta   
            return n1 - n2;
            break;
        case 'C': // Division
            if(n2 != 0){
                return n1 / n2;
            }
            return 0;
            break;
        case 'E': // Multi
            return n1 * n2;
            break;
        case 'F': // Potencia n1 ^ n2
            return pow(n1,n2);
            break;
        case 'G': // Potencia n2 ^ n1
            return pow(n2, n1);
            break;
        
    }
    return 0;
}