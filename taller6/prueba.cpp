#include <iostream>
#include <string>
using namespace std;

string Login(string, string, int);
int Intentos(int);

int main(){
    string user, pass;
    int intentos = 0;
    while(intentos < 3){

        cout << "Bienvenido!\nIngrese por favor su usuario: ";
        cin.ignore();
        getline(cin, user);
        cout << "Ingrese por favor su contraseña: ";
        cin >> pass;

        Login(user, pass, intentos);
            
    
    }
    return 0;
}

string Login(string nombre, string contr, int inte){
    if(nombre == "usuario1" && contr == "abcde"){
        return "Verdadero"; 
    }else{
        inte++;
        cout << "Contraseña incorrecta, intentos (" << inte << ") " << endl;
    }
    return false;
}

int Intentos(int intentos){
    intentos++;
    return intentos;  
}