/* Leer el nombre de un estudiante y decir si esté fue aceptado o no en una Universidad. Tenga en cuenta que esta universidad se tiene un arreglo de N posiciones con los nombres de los alumnos que fueron admitidos. Hacer este ejercicio usando el método de búsqueda secuencial aplicado al lenguaje de programación C++.*/

#include <iostream>
using namespace std;

int main(){
    int N;
    string *nombres, nom;
    bool band = false;

    cout << "Ingrese el número de estudiantes: ";
    cin >> N;

    nombres = new string[N];

    for(int i = 0; i < N; i++){
        cout<< "Ingrese el nombre del estudiante: ";
        cin >> nombres[i];
    }

    cout << "Ingrese el nombre a buscar: ";
    cin >> nom;

    for(int i = 0; i < N; i++){
        if(nom == nombres[i]){
            band = true;
            break;
        }
    }

    band?cout<<"\nFue admitido, ¡Felicitaciones!":cout<<"\nLastimosamente no fue admitido";

    return 0;
}
