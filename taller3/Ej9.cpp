/*En la Federación Colombiana de Fútbol se requiere almacenar los nombres de los jugadores que quedaron goleadores en el año actual usando un arreglo de P posiciones llamado goleadorActual y en otro arreglo de igual dimensión llamado goleadorAnterior donde se guardarán los nombres de los jugadores que quedaron goleadores el año inmediatamente anterior. Realizar una solución que permita a un entrenador leer el nombre de un jugador e imprima si puede ser seleccionado para su equipo o no.*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string *golAct, *golAnt, clave;
    int n;
    bool bandAct = false, bandAnt = false;
    cin >> n;
    golAct = new string[n];
    golAnt = new string[n];
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, golAct[i]);
    }
    for(int i = 0; i < n; i++){
        getline(cin, golAnt[i]);
    }

    getline(cin,clave);
    for(int i = 0; i < n; i++){
        if(golAct[i] == clave){
            bandAct = true;
        }
        if(golAnt[i] == clave){
            bandAnt = true;
        }
    }

    if(bandAct && bandAnt){
        cout << "SELECCIONADO PARA EL EQUIPO TITULAR" << endl;
    }else if(bandAct || bandAnt){
        cout << "SELECCIONADO" << endl;
    }else{
        cout << "NO SELECCIONADO" << endl;
    }

    return 0;
}