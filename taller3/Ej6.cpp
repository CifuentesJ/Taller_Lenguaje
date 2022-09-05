/*En la Institución Universitaria Salazar y Herrera se encuentran almacenados los nombres de N personas que fueron seleccionadas para ingresar a la institución durante este período académico. Se pide realizar un programa usando el lenguaje del enfoque de la asignatura para leer el nombre de un aspirante y le muestra si fue admitido o no en la institución universitaria. Usar método de búsqueda secuencial para dar solución a este reto de programación.*/

#include <iostream>
using namespace std;


int main() {
    int N;
    string *nombres, nom;
    bool band = false;

    cin >> N;
    nombres = new string[N];

    for(int i = 0; i < N; i++){
        cin >> nombres[i];
    }

    cin >> nom;

    for(int i = 0; i < N; i++){
        if(nom == nombres[i]){
            band = true;
            break;
        }
    }

    if(band == true){
        cout << "ACEPTADO" << endl;
    }else{
        cout << "RECHAZADO" << endl;
    }
    
    return 0;
}