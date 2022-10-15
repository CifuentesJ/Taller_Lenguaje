#include <iostream>
#include <iomanip>
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

    



    return 0;
}