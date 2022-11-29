#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);

    int GOLES[12][10] = {{1, 1, 1, 1, 1, 2, 1, 3, 3, 1},
                         {1, 2, 0, 0, 0, 1, 0, 0, 0, 0},
                         {4, 3, 3, 4, 3, 4, 4, 5, 7, 5},
                         {0, 2, 2, 1, 0, 0, 1, 0, 2, 0},
                         {3, 2, 0, 0, 2, 2, 2, 3, 2, 4},
                         {2, 1, 2, 2, 2, 2, 5, 3, 4, 6},
                         {1, 1, 0, 2, 2, 2, 2, 0, 2, 1},
                         {1, 1, 0, 0, 1, 0, 0, 1, 0, 4},
                         {2, 0, 1, 2, 2, 0, 1, 5, 0, 0},
                         {1, 1, 1, 2, 1, 1, 2, 1, 2, 1},
                         {1, 1, 1, 2, 1, 1, 2, 1, 4, 1},
                         {0, 4, 3, 5, 3, 1, 1, 0, 0, 0}};

    string JUGADORES[12]={"ALVARO","CARLOS","DIEGO","ELKIN","GABRIEL","JOHN","JUAN","LUIS","MARIO","PABLO","RAUL","SERGIO"};

    int total = 0, golCero = 0, golDifCero = 0, contGolDifCero = 0, golFecPar = 0, golFecImp = 0, may = 0, posJMen, posIMen, posIMay, posJMay, men = 999;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 10; j++){
            total += GOLES[i][j];

            if(GOLES[i][j] == 0){
                golCero++;
            }else if(GOLES[i][j] != 0){
                golDifCero += GOLES[i][j];
                contGolDifCero++;
            }

            if(j % 2 == 0){
                golFecPar += GOLES[i][j];
            }else{
                golFecImp += GOLES[i][j];
            }

            if(GOLES[i][j] > may){
                may = GOLES[i][j];
                posIMay = i;
                posJMay= j;
            }
            if(GOLES[i][j] <= men && GOLES[i][j] != 0){
                men = GOLES[i][j];
                posIMen = i;
                posJMen= j;
            }

        }
    }

    cout << "1. Total goles: " << total << endl;
    cout << "1. Promedio goles: " << total / (12.0*10.0) << endl;
    cout << "2. Cantidad sin marcar: " << golCero << endl;
    cout << "2. Porcentaje sin marcar: " << golCero / (12.0*10.0)*100 << "%" << endl;
    cout << "3. Total goles diferentes de cero: " << golDifCero << endl;
    cout << "3. Promedio goles diferentes de cero: " << golDifCero / (double)contGolDifCero<< endl;
    cout << "4. Promedio goles fechas impares: " << golFecImp / ((12.0*10.0)/2) << endl;
    cout << "4. Promedio goles fechas pares: " << golFecPar / ((12.0*10.0)/2) << endl;
    cout << "5. Mayor cantidad goles: " << may << " en [" << posIMay << "][" << posJMay << "]" << endl;
    cout << "6. Menor cantidad goles: " << men << " en [" << posIMen << "][" << posJMen << "]" << endl;



    /////////////////////////////////////////////////////////////////////////////////////////

    int totGolJug[12], mayGolJug[12] = {}, partidosCero[12];
    double promGolJug[12];
    for(int i = 0; i < 12; i++){
        int acumGol = 0, contCero = 0;
        for(int j = 0; j < 10; j++){
            acumGol += GOLES[i][j];
            if(GOLES[i][j] > mayGolJug[i]){
                mayGolJug[i] = GOLES[i][j];
            }
            if(GOLES[i][j] == 0){
                contCero++;
            }
        }
        totGolJug[i] = acumGol;
        promGolJug[i] = acumGol / 10.0;
        partidosCero[i] = contCero;
    }

    cout << "\n7. Total goles cada jugador: " << endl;
    for (int i = 0; i < 12; i++){
        cout << JUGADORES[i] << ": " << totGolJug[i] << endl;
    }
    cout << "\n8. Promedio goles cada jugador: " << endl;
    for (int i = 0; i < 12; i++){
        cout << JUGADORES[i] << ": " << promGolJug[i] << endl;
    }
    cout << "\n9. Mayor cantidad goles cada jugador: " << endl;
    for (int i = 0; i < 12; i++){
        cout << JUGADORES[i] << ": " << mayGolJug[i] << endl;
    }
    cout << "\n10. Partidos sin marcar cada jugador: " << endl;
    for (int i = 0; i < 12; i++){
        cout << JUGADORES[i] << ": " << partidosCero[i] << endl;
    }

    int totGolFec[10], mayGolFec[10] = {}, fecMen2[10];
    double promGolFec[10];
    for(int j = 0; j < 10; j++){
        int acumGol = 0, contFec = 0; 
        for(int i = 0; i < 12; i++){
            acumGol += GOLES[i][j];
            if(GOLES[i][j] > mayGolFec[j]){
                mayGolFec[j] = GOLES[i][j];
            }
            if(GOLES[i][j] < 2){
                contFec++;
            }
        }
        totGolFec[j] = acumGol;
        promGolFec[j] = acumGol / 12.0;
        fecMen2[j] = contFec;
    }

    cout << "\n11. Total goles cada fecha: " << endl;
    for (int i = 0; i < 10; i++){
        cout << "Fecha " << i + 1 << ": " << totGolFec[i] << endl;
    }
    cout << "\n12. Promedio goles cada fecha: " << endl;
    for (int i = 0; i < 10; i++){
        cout << "Fecha " << i + 1 << ": " << promGolFec[i] << endl;
    }
    cout << "\n13. Mayor cantidad goles cada fecha: " << endl;
    for (int i = 0; i < 10; i++){
        cout << "Fecha " << i + 1 << ": " << mayGolFec[i] << endl;
    }
    cout << "\n14. Partidos sin marcar cada fecha: " << endl;
    for (int i = 0; i < 10; i++){
        cout << "Fecha " << i + 1 << ": " << fecMen2[i] << endl;
    }

    int mayGoles = 0, menGoles = 99, goleador, perdedor;
    for(int i = 0; i < 12; i++){
        if(totGolJug[i] > mayGoles){
            mayGoles = totGolJug[i];
            goleador = i;
        }
        if(totGolJug[i] < menGoles){
            menGoles = totGolJug[i];
            perdedor = i;
        }
    }
    cout << "\n15. Goleador: " << JUGADORES[goleador] << endl;
    cout << "16. Menos goles: " << JUGADORES[perdedor] << endl;

    int mayFecha = 0, menFecha = 99, fecMay, fecMen;
    for(int i = 0; i < 10; i++){
        if(totGolFec[i] > mayFecha){
            mayFecha = totGolFec[i];
            fecMay= i;
        }
        if(totGolFec[i] < menFecha){
            menFecha = totGolFec[i];
            fecMen = i;
        }
    }
    cout << "\n17. Fecha más goles: " << fecMay+1 << endl;
    cout << "18. Fecha menos goles: " << fecMen+1 << endl;


    string buscJug, nom = "";
    cout << "\n--------------------------------" << endl;
    cout << "Ingrese el nombre del jugador: " ;
    cin >> buscJug ;
    cout << "\n--------------------------------" << endl;

    int M = size(buscJug);
    for(int i = 0; i < M ; i++){
        nom += toupper(buscJug[i]);
    }   

    int posJug;
    for(int i = 0; i < 12; i++){
        if(JUGADORES[i] == nom){
            posJug = i;
            break;
        }
    }

    cout << "\nGoles en cada fecha: " << endl;
    for(int i = posJug; i < posJug+1; i++){
        for(int j = 0; j < 10; j++){
            cout << "Fecha " << j + 1 << ": " << GOLES[i][j] << endl;
        }
    }
    cout << "Total de goles: " << totGolJug[posJug] << endl;
    cout << "Promedio de goles: " << promGolJug[posJug] << endl;
    cout << "Mayor cantidad de goles por partido: " << mayGolJug[posJug] << endl;
    cout << "Cantidad de fechas sin marcar: " << partidosCero[posJug] << endl;

    int golesAscend[12];
    for(int i = 0; i < 12; i++){
        golesAscend[i] = totGolJug[i];
    }

    bool band = true;
    for(int i = 0; i < 12-1 && band; i++){
        band = false;
        for (int j = 0; j < 12-i-1; j++){
            if (golesAscend[j] > golesAscend[j+1]){
                int aux = golesAscend[j];
                golesAscend[j] = golesAscend[j+1];
                golesAscend[j+1] = aux;
                band = true;
            }
        }
    }

    cout << "\nGoles total por jugador ordenado: " << endl;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(totGolJug[j] == golesAscend[i] && golesAscend[i] != golesAscend[i-1]){
                cout << JUGADORES[j] << ": " << golesAscend[i] << endl;
            }
        }
    }


    int golesDescen[10];
    for(int i = 0; i < 10; i++){
        golesDescen[i] = totGolFec[i];
    }

    bool band2 = true;
    for(int i = 0; i < 10-1 && band2; i++){
        band2 = false;
        for (int j = 0; j < 10-i-1; j++){
            if (golesDescen[j] > golesDescen[j+1]){
                int aux = golesDescen[j];
                golesDescen[j] = golesDescen[j+1];
                golesDescen[j+1] = aux;
                band2 = true;
            }
        }
    }

    cout << "\nGoles total por fecha ordenado: " << endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(totGolFec[j] == golesDescen[i] && golesDescen[i] != golesDescen[i-1]){
                cout << "Fecha: " << i << ": " << golesDescen[i] << endl;
            }
        }
    }

    return 0;
}