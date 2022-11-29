#include <iostream>
#include <string>
using namespace std;

double aumSal(string, double);

int main() {
	int N;
	double salario;
	string categoria;
	cout << "Ingrese la cantidad de empleados: " << endl;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "Ingrese su categoria: " << endl;
		cin >> categoria;
		cout << "Ingrese su salario: " << endl;
		cin >> salario;
		
	}
	
}
double aumSal(string categoria, double salario){
	if (categoria == "Sindicalizado")
        return (salario * 0.2) + salario;
    else if (categoria == "De confianza")
        return (salario * 0.1) + salario;
    else if (categoria == "Alto ejecutivo")
        return (salario * 0.05) + salario;
    return (salario);
}