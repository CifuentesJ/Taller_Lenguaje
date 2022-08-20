/*Hacer un programa en C++ para almacenar la edad de 10 estudiantes de un colegio en un vector
llamado EDAD. Luego llevarlo a otro vector llamado INVERSO donde almacene la primera edad
del primer vector en la última posición del segundo vector, la segunda en la penúltima y así
sucesivamente hasta llevar todos los elementos. Tener en cuenta la siguiente imagen.*/

#include <iostream>
using namespace std;

int main(){
    int edad[10], inv[10];

    cout<<"Ingrese las 10 edades: ";
    for (int i = 0; i < 10; i++){
        cin>> edad[i];
    }

    for (int i = 0; i < 10; i++){
        inv[i] = edad[9-i];
    }
    
    cout<<"\nVector edad: \t";
    for (int i = 0; i < 10; i++){
        cout << "(" << edad[i] << ") ";
    }
    cout<<"\nVector inverso: ";
    for (int i = 0; i < 10; i++){
        cout << "(" << inv[i] << ") ";
    }

    return 0;
}