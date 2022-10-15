#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;

int main(){
    cout.precision(2);
    cout.setf(ios::fixed);
    setlocale(LC_CTYPE, "spanish");

    double EDADES[11][5] = {{6.85, 6.02, 5.85, 5.94, 5.49}, 
                            {7.54, 5.37, 7.85, 7.26, 7.94}, 
                            {6.27, 7.99, 8.85, 8.80, 8.49}, 
                            {9.72, 7.02, 7.17, 7.85, 9.63}, 
                            {10.03, 8.80, 9.85, 10.40, 10.04}, 
                            {9.67, 10.20, 10.39, 11.24, 11.92}, 
                            {14.12, 15.90, 14.88, 15.65, 13.54}, 
                            {16.99, 13.78, 14.54, 16.10, 15.97}, 
                            {15.85, 16.47, 15.65, 15.62, 15.76}, 
                            {17.75, 16.33, 17.99, 16.61, 18.02}, 
                            {20.30, 17.05, 17.72, 17.50, 20.72}};

    
    double maySed[5] = {}, promSed[5], menSed[5], sumSed[5];
    for (int j = 0; j < 5; j++){
        double acumEdad = 0, edadMen = 99;
        for (int i = 0; i < 11; i++){
            if(EDADES[i][j] > maySed[j]){
                maySed[j] = EDADES[i][j];
            }
            if(EDADES[i][j] < edadMen){
                edadMen = EDADES[i][j];
            }
            acumEdad += EDADES[i][j];
        }
        promSed[j] = acumEdad / 11; 
        menSed[j] = edadMen;
        sumSed[j] = acumEdad;
        
    }
    
    cout << "EDAD MAYOR POR CADA SEDE: " << endl; 
    for (int i = 0; i < 5; i++){
        cout << "Mayor en sede #" << i << ": " << maySed[i] << endl;
    }
    cout << "\nEDAD PROMEDIO POR CADA SEDE: " << endl; 
    for (int i = 0; i < 5; i++){
        cout << "Promedio en sede #" << i << ": " << promSed[i] << endl;
    }
    cout << "\nEDAD MENOR POR CADA SEDE: " << endl; 
    for (int i = 0; i < 5; i++){
        cout << "Menor en sede #" << i << ": " << menSed[i] << endl;
    }
    cout << "\nEDAD SUMA POR CADA SEDE: " << endl; 
    for (int i = 0; i < 5; i++){
        cout << "Suma en sede #" << i << ": " << sumSed[i] << endl;
    }


    double mayGrad[11] = {}, promGrad[11], menGrad[11], sumGrad[11];
    for (int i = 0; i < 11; i++){
        double edadMen = 99, acum = 0;
        for (int j = 0; j < 5; j++){
            if(EDADES[i][j] > mayGrad[i]){
                mayGrad[i] = EDADES[i][j];
            }
            if(EDADES[i][j] < edadMen){
                edadMen = EDADES[i][j];
            }
            acum += EDADES[i][j];
        }
        promGrad[i] = acum / 5;  
        menGrad[i] = edadMen;
        sumGrad[i] = acum;

    }
    
    cout << "\nEDAD MAYOR POR CADA GRADO: " << endl; 
    for (int i = 0; i < 11; i++){
        cout << "Mayor en grado #" << i << ": " << mayGrad[i] << endl;
    }
    cout << "\nEDAD PROMEDIO POR CADA GRADO: " << endl; 
    for (int i = 0; i < 11; i++){
        cout << "Promedio en grado #" << i << ": " << promGrad[i] << endl;
    }
    cout << "\nEDAD MENOR POR CADA GRADO: " << endl; 
    for (int i = 0; i < 11; i++){
        cout << "Menor en grado #" << i << ": " << menGrad[i] << endl;
    }
    cout << "\nEDAD SUMA POR CADA GRADO: " << endl; 
    for (int i = 0; i < 11; i++){
        cout << "Suma en grado #" << i << ": " << sumGrad[i] << endl;
    }

    return 0;
}
