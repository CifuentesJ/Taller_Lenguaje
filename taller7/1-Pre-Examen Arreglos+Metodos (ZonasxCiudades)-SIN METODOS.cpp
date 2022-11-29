#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;

void Punto1(int **, int **, int);
void Punto2(int **, int);
void Punto3(int ** , int **, int);
void Punto4(int **, int **, int);
void Punto5(int **, int);
void Punto6(int **, int);
void Punto7(int **, string *, double *, int );
void Punto8(int, int **, int **, string *);
void Punto9(double *, string *);
void Punto10(int **, int);

int main() {
	setlocale(LC_CTYPE, "spanish");
	cout.setf(ios::fixed);
	cout.precision(2);
	srand(time(NULL));
	//DECLARACIÓN DE ARREGLOS
	int N;
	cout << "Ingrese la cantidad de zonas [N]: ";
	cin >> N;
	int** CODIGOS = new int* [N];
	int** EXISTENCIAS = new int* [N];	
	for (int i = 0; i < N; i++)
	{
		CODIGOS[i] = new int[6];
		EXISTENCIAS[i] = new int[6];
	}
	string CIUDADES[6] = { "MEDELLÍN", "BOGOTÁ","CALI", "BARRANQUILLA", "CARTAGENA ", "SANTA MARTHA" };

	//PUNTO 1
	Punto1(CODIGOS, EXISTENCIAS, N);

	//PUNTO 2
	Punto2(CODIGOS, N);

	//PUNTO 3
	Punto3( CODIGOS, EXISTENCIAS, N);

	//PUNTO 4
	Punto4(CODIGOS, EXISTENCIAS, N);

	//PUNTO 5
	Punto5(CODIGOS, N);

	//PUNTO 6
	Punto6( EXISTENCIAS, N);

	//PUNTO 7
	double vecPto7[6]{};
	Punto7(EXISTENCIAS, CIUDADES, vecPto7, N);

	//PUNTO 8
	Punto8(N, CODIGOS, EXISTENCIAS, CIUDADES);

	//PUNTO 9
	Punto9(vecPto7, CIUDADES);

	//PUNTO 10
	Punto10(EXISTENCIAS, N);

	return 0;
}

void Punto1(int ** CODIGOS, int ** EXISTENCIAS, int N){
	cout << "1-MATRIZ CODIGOS" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			CODIGOS[i][j] = 100 + rand() % 900;
			cout << CODIGOS[i][j] << "   ";
		}
		cout << endl;
	}
	cout << "\n1-MATRIZ EXISTENCIAS" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			EXISTENCIAS[i][j] = rand() % 100;
			cout << EXISTENCIAS[i][j] << "   ";
		}
		cout << endl;
	}
}

void Punto2(int ** CODIGOS, int N){
	int contP = 0, contI = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (CODIGOS[i][j] % 2 == 0)
				contP++;
			else
				contI++;
		}
	}
	cout << "\n2. Cantidad códigos pares: " << contP << " representan el " << (double)contP / (N * 6) * 100 << "%" << endl;
	cout << "2. Cantidad códigos impares: " << contI << " representan el " << (double)contI / (N * 6) * 100 << "%" << endl;
}

void Punto3(int ** CODIGOS, int ** EXISTENCIAS, int N){
	int may = 0, men = 100;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (CODIGOS[i][j] > 500) {
				if (EXISTENCIAS[i][j] > may) {
					may = EXISTENCIAS[i][j];
				}
				if (EXISTENCIAS[i][j] != 0 && EXISTENCIAS[i][j] < men) {
					men = EXISTENCIAS[i][j];
				}
			}
		}
	}
	cout << "\n4. Suma del mayor (" << may << ") y el menor (" << men << ") = " << may + men << endl;
}

void Punto4(int ** CODIGOS, int ** EXISTENCIAS, int N){
	int acum = 0, cont = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 3; j < 6; j++)
		{
			if (EXISTENCIAS[i][j] != 0 && CODIGOS[i][j] <= 500) {
				acum += EXISTENCIAS[i][j];
				cont++;
			}
		}
	}
	if (cont == 0)
		cout << "\n3. Promedio existencias <> 0 costa en codigos nacionales: 0" << endl;
	else
		cout << "\n3. Promedio existencias <> 0 costa en codigos nacionales: " << (double)acum / cont << endl;
}

void Punto5(int ** CODIGOS, int N){
	int posi = -1, posj = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j += 2)
		{
			if (CODIGOS[i][j] % 10 == 0) {
				posi = i;
				posj = j;
			}
		}
	}
	if (posi == -1) {
		cout << "\n5. No existe código que termine en 0 en Medellín, Cali o Cartagena." << endl;
	}
	else {
		cout << "\n5. Existe código que termine en 0 en Medellín, Cali o Cartagena." << endl;
		cout << "5.Existe en coordenadas [" << posi << "][" << posj << "]" << endl;
	}
}

void Punto6(int ** EXISTENCIAS, int N){
	int* vecPto6 = new int[N];
	for (int i = 0; i < N; i++)
	{
		int cont = 0;
		for (int j = 0; j < 6; j++)
		{
			if (EXISTENCIAS[i][j] == 0)
				cont++;
		}
		vecPto6[i] = cont;
	}
	cout << "\n6. Cantidad de existencias = 0 por zonas" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Zona #" << i << ": " << vecPto6[i] << endl;
	}
}

void Punto7(int ** EXISTENCIAS, string CIUDADES[], double vecPto7[], int N){
	for (int j = 0; j < 6; j++)
	{
		int acum = 0;
		for (int i = 0; i < N; i++)
		{
			acum += EXISTENCIAS[i][j];
		}
		vecPto7[j] = (double)acum / N;
	}
	cout << "\n7. Promedio de existencias ciudades" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Ciudad " << CIUDADES[i] << ": " << vecPto7[i] << endl;
	}
}

void Punto8(int N, int ** CODIGOS, int ** EXISTENCIAS, string CIUDADES[]){ // Debería ser primero matrices, vectores y luego var.Primitivas
	int cod;
	int posi = -1, posj = 0;
	cout << "\n8. Digite código a buscar: ";
	cin >> cod;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (CODIGOS[i][j] == cod) {
				posi = i;
				posj = j;
			}
		}
	}
	if (posi == -1)
		cout << "Código no existe. " << endl;
	else
		cout << "Código existe en la Zona #" << posi << " en la ciudad " << CIUDADES[posj] << ". Existencias " << EXISTENCIAS[posi][posj] << endl;
}

void Punto9(double vecPto7[], string CIUDADES[]){
	for (int i = 0; i < 5; i++)
	{
		for (int k = i + 1; k < 6; k++)
		{
			if (vecPto7[i] < vecPto7[k]) {
				double aux = vecPto7[i];
				vecPto7[i] = vecPto7[k];
				vecPto7[k] = aux;
				string ciudad = CIUDADES[i];
				CIUDADES[i] = CIUDADES[k];
				CIUDADES[k] = ciudad;
			}
		}
	}
	cout << "\n9. Vector Punto7 Ordenado Descendentemente." << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Ciudad " << CIUDADES[i] << ": " << vecPto7[i] << endl;
	}
}

void Punto10(int ** EXISTENCIAS, int N){
	cout << "\n10. MATRIZ EXISTENCIAS x 1000" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			EXISTENCIAS[i][j] *= 1000;
			cout << EXISTENCIAS[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}