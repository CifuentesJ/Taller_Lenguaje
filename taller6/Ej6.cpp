#include <iostream>
#include <string>
using namespace std;

bool Login(string, string);
int Intentos(int);

int main(){
    string user, pass;
    int intentos = 0;
    cout << "Bienvenido!" << endl;
    while(intentos < 3){

        cout << "\nIngrese por favor su usuario: ";
        getline(cin, user);
        cout << "Ingrese por favor su contraseña: ";
        cin >> pass;

        if(Login(user,pass)){
            cout << "\n------------------------" << endl;
            cout << "Bienvenido " << user << endl; 
            cout << "------------------------" << endl;
            break;
        }else{
            intentos = Intentos(intentos);
            cout << "Contraseña incorrecta, intentos (" << intentos << ") " << endl;
        }
    
    }
    return 0;
}

bool Login(string nombre, string contr){
    if(nombre == "usuario1" && contr == "abcde"){
        return true;
    }
    return false;
}

int Intentos(int intentos){
    intentos++;
    return intentos;  
}