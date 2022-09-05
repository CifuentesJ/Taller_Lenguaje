/*En la empresa Avianca se almacenan el número de pasajeros que abordan N aviones. Desarrollar una solución que permita leer la información de ese arreglo e imprima: El total de pasajeros de la empresa Avianca. El número de pasajeros promedio. Finalmente, la menor cantidad de pasajeros y el número del avión en el que estaban ubicados (la posición del arreglo en base 1) y la mayor cantidad de pasajeros y el número del avión en el que estaban ubicados (la posición del arreglo en base 1).*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int *pas, n, acum = 0, may, men, posMay = 0, posMen = 0;
    float promPas;
    cin >> n;
    pas = new int[n];

    for(int i = 0; i < n; i++){
        cin >> pas[i];
        acum += pas[i];
    }

    promPas = (float)acum / n;
    may = pas[0];
    men = pas[0];

    for(int i = 1; i < n; i++){
        if(pas[i] > may){
            may = pas[i];
            posMay = i;
        }
        if(pas[i] < men){
            men = pas[i];
            posMen = i;
        }
    }

    cout << acum << endl;
    cout << promPas << endl;
    cout << men << " " << posMen+1 << endl;
    cout << may << " " << posMay+1 << endl;

    
    return 0;
}