#include <iostream>
#include <clocale>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
    cout.precision(2);
    cout.setf(ios::fixed);
    setlocale(LC_CTYPE, "spanish");

    int PUNTOS[6][15] = {{9, 5, 8, 25, 10, 4, 24, 16, 5, 10, 2, 23, 13, 9, 19},
                         {23, 7, 22, 10, 23, 14, 10, 17, 12, 5, 20, 21, 20, 15, 14},
                         {0, 19, 14, 20, 16, 5, 10, 0, 6, 11, 0, 11, 0, 13, 1},
                         {25, 22, 8, 23, 9, 22, 6, 14, 23, 8, 9, 7, 11, 13, 11},
                         {16, 6, 7, 8, 11, 9, 11, 3, 19, 25, 24, 15, 18, 11, 25},
                         {0, 8, 10, 2, 9, 0, 0, 7, 17, 0, 15, 18, 0, 8, 0}};

    string ESCUDERIA[6] = {"HONDA", "DUCATI", "YAMAHA", "SUZUKI", "KTM", "APRILIA"};

    string PAIS[15] = {"QATAR", "ARGENTINA", "EEUU", "SPAIN", "FRANCE", "ITALY", "SUIZA", "NETHERLANDS", "GERMANY", "BRAZIL", "AUSTRIA", "CHILE", "THAILAND", "JAPAN", "AUSTRALIA"};

    int puntEsc[6], mayEsc[6] = {}, menEsc[6], puntCero[6] = {}; 
    double promEsc[6];
    for (int i = 0; i < 6; i++){
        int acum = 0, men = 999999, contCero = 0;
        for (int j = 0; j < 15; j++){
            acum += PUNTOS[i][j];
            if(PUNTOS[i][j] > mayEsc[i]){
                mayEsc[i] = PUNTOS[i][j];
            }
            if(PUNTOS[i][j] < men){
                men = PUNTOS[i][j];
            }
            if(PUNTOS[i][j] == 0){
                contCero++;
            }
        }
        puntEsc[i] = acum;
        promEsc[i] = acum / 15.0;
        menEsc[i] = men;
        puntCero[i] = contCero;
    }

    int puntPais[15], mayPais[15] = {}, menPais[15], impPais[15];
    double promPais[15];
    for (int j = 0; j < 15; j++){
        int acum = 0, men = 999999, acumImp = 0;
        for (int i = 0; i < 6; i++){
            acum += PUNTOS[i][j];
            if(PUNTOS[i][j] > mayPais[j]){
                mayPais[j] = PUNTOS[i][j];
            }
            if(PUNTOS[i][j] < men){
                men = PUNTOS[i][j];
            }
            if(PUNTOS[i][j] % 2 == 1 && (i+j) % 2 == 0){
                acumImp += PUNTOS[i][j];
            }
        }
        puntPais[j] = acum;
        promPais[j] = acum / 6.0;
        menPais[j] = men;
        impPais[j] = acumImp;
    }

    
    
    cout << "PUNTOS POR ESCUDERÍA: " << endl; 
    for (int i = 0; i < 6; i++){
        cout << ESCUDERIA[i] << ": " << puntEsc[i] << endl;
    }
    cout << "\nPUNTOS PROMEDIO POR ESCUDERÍA: " << endl; 
    for (int i = 0; i < 6; i++){
        cout <<  ESCUDERIA[i] << ": " << promEsc[i] << endl;
    }
    cout << "\nPUNTOS MAYORES POR ESCUDERÍA: " << endl; 
    for (int i = 0; i < 6; i++){
        cout <<  ESCUDERIA[i] << ": " << mayEsc[i] << endl;
    }
    cout << "\nPUNTOS MENORES POR ESCUDERÍA: " << endl; 
    for (int i = 0; i < 6; i++){
        cout <<  ESCUDERIA[i] << ": " << menEsc[i] << endl;
    }
    cout << "\nVECES QUE NO PUNTUARON EN ESCUDERÍA: " << endl; 
    for (int i = 0; i < 6; i++){
        cout <<  ESCUDERIA[i] << ": " << puntCero[i] << endl;
    }

    // PAIS
    cout << "\n------------------------------------";
    cout << "\nPUNTOS POR PAÍS: " << endl; 
    for (int i = 0; i < 15; i++){
        cout << PAIS[i] << ": " << puntPais[i] << endl;
    }
    cout << "\nPUNTOS PROMEDIO POR PAÍS: " << endl; 
    for (int i = 0; i < 15; i++){
        cout <<  PAIS[i] << ": " << promPais[i] << endl;
    }
    cout << "\nPUNTOS MAYORES POR PAÍS: " << endl; 
    for (int i = 0; i < 15; i++){
        cout <<  PAIS[i] << ": " << mayPais[i] << endl;
    }
    cout << "\nPUNTOS MENORES POR PAÍS: " << endl; 
    for (int i = 0; i < 15; i++){
        cout <<  PAIS[i] << ": " << menPais[i] << endl;
    }
    cout << "\nPUNTOS IMPARES EN POSICIONES PARES: " << endl; 
    for (int i = 0; i < 15; i++){
        cout <<  PAIS[i] << ": " << impPais[i] << endl;
    }


    string clavePais, clavePais2 = "", claveEsc, claveEsc2 = "", pais, esc;
    cout << "\n------------------------------------";
    cout << "\nIngrese el pais a buscar info: ";
    cin >> clavePais;
    cout << "------------------------------------";

    int N = size(clavePais), posPais = -1, posEsc = -1;
    for(int i = 0; i < N; i++){
        clavePais2 += toupper(clavePais[i]);
    }

    for (int i = 0; i < 15; i++){
        if(PAIS[i] == clavePais2){
            posPais = i;
            pais = PAIS[i];
            break;
        }
    }
    
    for (int j = posPais; j < posPais+1 && posPais != -1; j++){
        cout << "\n\nPUNTOS DE " << pais << ": ";
        for (int i = 0; i < 6; i++){
            cout << PUNTOS[i][j] << " - ";
        }
        cout << "\nCantidad puntos: " << puntPais[j] << endl;
        cout << "Puntos promedio: " << promPais[j] << endl;
        cout << "Mayor puntaje: " << mayPais[j] << endl;
        cout << "Menor puntaje: " << menPais[j] << endl;
        cout << "Puntos impares en posiciones pares: " << impPais[j] << endl; 
    }
    
    cout << "\n------------------------------------";
    cout << "\nIngrese la escudería a buscar info: ";
    cin >> claveEsc;
    cout << "------------------------------------";

    int M = size(claveEsc);
    for(int i = 0; i < M; i++){
        claveEsc2 += toupper(claveEsc[i]);
    }

    for (int i = 0; i < 6; i++){
        if(ESCUDERIA[i] == claveEsc2){
            posEsc = i;
            esc = ESCUDERIA[i];
            break;
        }
    }

    for (int i = posEsc; i < posEsc+1 && posEsc != -1; i++){
        cout << "\n\nPUNTOS DE " << esc << ": ";
        for (int j = 0; j < 15; j++){
            cout << PUNTOS[i][j] << " - ";
        }
        cout << "\nCantidad puntos: " << puntEsc[i] << endl;
        cout << "Puntos promedio: " << promEsc[i] << endl;
        cout << "Mayor puntaje: " << mayEsc[i] << endl;
        cout << "Menor puntaje: " << menEsc[i] << endl;
        cout << "Cantidad de veces que no marcaron: " << puntCero[i] << endl; 
    }

    return 0;
}