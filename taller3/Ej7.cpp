/*Se acaba de terminar una competencia de programación competitiva realizada en tu institución educativa. A pesar de haber clasificado a la siguiente ronda, como eres una persona competitiva, quieres saber si el puntaje obtenido es mejor que el promedio de los N puntajes y cuál la diferencia entre tu puntaje y ese promedio. */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int *punt, n, pun;
    float prom, dif, acum;
    cin >> n >> pun;
    punt = new int[n];

    for(int i = 0; i < n; i++){
        cin >> punt[i];
        acum += punt[i];
    }

    prom = acum / n;
    dif = pun - prom;

    if(pun > prom){
        cout << "SI " << dif << endl; 
    }else{
        cout << "NO" << endl;
    }

    
    return 0;
}