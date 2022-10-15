#include<iostream>
#include <cstdlib>
using namespace std;

int main() {
	//Configurar precisión decimal y tildes	
	cout.setf(ios::fixed);
	cout.precision(2);

	//Declarar la matriz dinámica
	int **PRODUCCION, N = 8;
	PRODUCCION = new int*[12];
	for (int i = 0; i < 12; i++){
		PRODUCCION[i] = new int[N];
	}

	//Dejar estos datos quemados para manipular la matriz
	PRODUCCION[0][0] = 1166;	PRODUCCION[0][1] = 5987;	PRODUCCION[0][2] = 7739;	PRODUCCION[0][3] = 6018;	PRODUCCION[0][4] = 7360;	PRODUCCION[0][5] = 761;		PRODUCCION[0][6] = 222;		PRODUCCION[0][7] = 2765;
	PRODUCCION[1][0] = 7691;	PRODUCCION[1][1] = 102;		PRODUCCION[1][2] = 4640;	PRODUCCION[1][3] = 3682;	PRODUCCION[1][4] = 7098;	PRODUCCION[1][5] = 562;		PRODUCCION[1][6] = 4841;	PRODUCCION[1][7] = 4019;
	PRODUCCION[2][0] = 3987;	PRODUCCION[2][1] = 1493;	PRODUCCION[2][2] = 5671;	PRODUCCION[2][3] = 3029;	PRODUCCION[2][4] = 3558;	PRODUCCION[2][5] = 2512;	PRODUCCION[2][6] = 714;		PRODUCCION[2][7] = 1754;
	PRODUCCION[3][0] = 553;		PRODUCCION[3][1] = 2712;	PRODUCCION[3][2] = 5589;	PRODUCCION[3][3] = 7016;	PRODUCCION[3][4] = 4807;	PRODUCCION[3][5] = 4679;	PRODUCCION[3][6] = 390;		PRODUCCION[3][7] = 826;
	PRODUCCION[4][0] = 1251;	PRODUCCION[4][1] = 1790;	PRODUCCION[4][2] = 4325;	PRODUCCION[4][3] = 2853;	PRODUCCION[4][4] = 1533;	PRODUCCION[4][5] = 6113;	PRODUCCION[4][6] = 989;		PRODUCCION[4][7] = 5286;
	PRODUCCION[5][0] = 4093;	PRODUCCION[5][1] = 2926;	PRODUCCION[5][2] = 6434;	PRODUCCION[5][3] = 1116;	PRODUCCION[5][4] = 745;		PRODUCCION[5][5] = 5103;	PRODUCCION[5][6] = 3601;	PRODUCCION[5][7] = 2258;
	PRODUCCION[6][0] = 5016;	PRODUCCION[6][1] = 6263;	PRODUCCION[6][2] = 6679;	PRODUCCION[6][3] = 2504;	PRODUCCION[6][4] = 7856;	PRODUCCION[6][5] = 676;		PRODUCCION[6][6] = 5563;	PRODUCCION[6][7] = 436;
	PRODUCCION[7][0] = 6507;	PRODUCCION[7][1] = 3712;	PRODUCCION[7][2] = 5050;	PRODUCCION[7][3] = 3997;	PRODUCCION[7][4] = 7931;	PRODUCCION[7][5] = 1009;	PRODUCCION[7][6] = 2753;	PRODUCCION[7][7] = 2553;
	PRODUCCION[8][0] = 3025;	PRODUCCION[8][1] = 310;		PRODUCCION[8][2] = 5300;	PRODUCCION[8][3] = 7814;	PRODUCCION[8][4] = 3219;	PRODUCCION[8][5] = 3649;	PRODUCCION[8][6] = 1342;	PRODUCCION[8][7] = 1229;
	PRODUCCION[9][0] = 4080;	PRODUCCION[9][1] = 6731;	PRODUCCION[9][2] = 1258;	PRODUCCION[9][3] = 4638;	PRODUCCION[9][4] = 901;		PRODUCCION[9][5] = 425;		PRODUCCION[9][6] = 3881;	PRODUCCION[9][7] = 5734;
	PRODUCCION[10][0] = 7428;	PRODUCCION[10][1] = 4917;	PRODUCCION[10][2] = 7122;	PRODUCCION[10][3] = 1041;	PRODUCCION[10][4] = 5935;	PRODUCCION[10][5] = 6687;	PRODUCCION[10][6] = 5815;	PRODUCCION[10][7] = 2125;
	PRODUCCION[11][0] = 910;	PRODUCCION[11][1] = 121;	PRODUCCION[11][2] = 1888;	PRODUCCION[11][3] = 1961;	PRODUCCION[11][4] = 505;	PRODUCCION[11][5] = 5734;	PRODUCCION[11][6] = 5883;	PRODUCCION[11][7] = 4562;

	//Imprimir la matriz
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			cout << PRODUCCION[i][j] << "  ";
		}
		cout << endl;
	}


	//Punto 1
	int proTot = 0;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			proTot += PRODUCCION[i][j];
		}
		
	}
	cout << "\n1. Producción total en toneladas de todas las frutas : " << proTot << endl;
	cout << "1. Producción promedio en toneladas de todas las frutas : " << (double)proTot/(12*N)  << endl;


	//Punto 2	
	int proUltTrim = 0, contUltTrim = 0;
	for (int i = 9; i < 12; i++){
		for (int j = 1; j < 8; j += 2){
			proUltTrim += PRODUCCION[i][j];
			contUltTrim++;
		}
		
	}
	cout << "\n2. Producción total en toneladas de frutas en columnas impares último trimestre   : " << proUltTrim << endl;
	cout << "2. Producción promedio en toneladas de frutas en columnas impares último trimestre: " << (double)proUltTrim / contUltTrim << endl;


	//Punto 3
	int acumPriFru = 0, acumUltFru = 0; 
	string men = "";
	for (int j = 0; j < N; j++){
		for(int i = 0; i < 1; i++){
			acumPriFru += PRODUCCION[i][j];
		}
		for(int i = 11; i < 12; i++ ){
			acumUltFru += PRODUCCION[i][j];
		}
	}
	double promUltFru = 0, promPriFru = 0;
	promUltFru = (double)acumUltFru / N ;
	promPriFru = (double)acumPriFru / N ;

	if(promUltFru > promPriFru){
		men = "mayor";
	}else if(promUltFru < promPriFru){
		men = "menor";
	}else{
		men = "igual";
	}
	cout << "\n3. Es " << men <<" la produccion promedio de la última fila: "<< promUltFru << "que la de la primera: " << promPriFru << endl;
	

	//Punto 4	
	int cont4 = 0;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			if(PRODUCCION[i][j] > 500 && PRODUCCION[i][j] < 2500){
				cont4++;
			}
		}
	}
	
	cout << "\n4. Cantidad de producciones entre 500 y 2.500 toneladas : " << cont4 << endl;
	cout << "4. Porcentaje de producciones entre 500 y 2.500 toneladas : " << cont4 / (double)(12*N) * 100 << "%" << endl;


	//Punto 5
	int cont5 = 0;	
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			if((i + j) % 2 == 0 && PRODUCCION[i][j] % 2 == 1){
				cont5++;
			}
		}
	}
	cout << "\n5. Cantidad de producción de frutas impares en posiciones pares  : " << cont5 << endl;
	cout << "5. Porcentaje de producción de frutas impares en posiciones pares: " << cont5 / (double)((12*N) / 2) * 100 << "%" << endl;


	//Punto 6
	int prodDiagPri = 0, prodDiagSec = 0;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			if(i == j){
				prodDiagPri += PRODUCCION[i][j];
			}
			if((i+j) == N-1){
				prodDiagSec += PRODUCCION[i][j];
			}
		}
	}
	if((prodDiagPri / (double)proTot*100) > (prodDiagSec / (double)proTot * 100)){
		men = "mayor";
	}else if((prodDiagPri / (double)proTot*100) < (prodDiagSec / (double)proTot * 100)){
		men = "menor";
	}else{
		men = "igual";
	}
	cout << "\n6. Es " << men << " el porcentaje de producción frutas de la diagonal principal " << prodDiagPri / (double)proTot*100 << "% que la secundaria " << prodDiagSec / (double)proTot * 100 << "%" << endl;
	

	//Punto 7	
	int may = 0, fila, colum;
	for (int i = 1; i < 12; i+= 2){
		for (int j = 0; j < N; j+= 2){
			if(PRODUCCION[i][j] > may){
				may = PRODUCCION[i][j];
				fila = i;
				colum = j;
			}
		}
	}
	cout << "\n7. Mayor producción en meses impares de frutas pares: " << may << endl;
	cout << "7. Coordenadas de la mayor producción. Mes "<< fila <<" y Fruta "<< colum << endl;


	//Punto 8	
	int menor = 999999, fila8, colum8;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < N; j++){
			if(PRODUCCION[i][j] % 10 == 0 && PRODUCCION[i][j] < menor){
				menor = PRODUCCION[i][j];
				fila8 = i;
				colum8 = j;
			}
		}
	}
	cout << "\n8. Menor producción múltiplo de 10 : " << menor << endl;
	cout << "8. Coordenadas de la menor producción. Mes "<< fila8 << " y Fruta "<< colum8 << endl;


	//Punto 9	
	int mayProd = 0, menProd = 99999;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < N; j++){
			if(PRODUCCION[i][j] > mayProd){
				mayProd = PRODUCCION[i][j];
			}
			if(PRODUCCION[i][j] < menProd){
				menProd = PRODUCCION[i][j];
			}
		}
	}
	cout << "\n9. Deferencia entre la mayor: " << mayProd << " y la menor: "<< menProd <<" producción es: " << mayProd - menProd << endl;


	//Punto 10
	int clave;
	cout << "\n10. Ingrese producción (en toneladas) a buscar: ";
	cin >> clave;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < N; j++){
			if(clave == PRODUCCION[i][j]){
				cout << "Coordenadas: [" << i+1 << "][" << j+1 <<"]";
			}
		}
	}
	
	//Punto 11
	int acumTriSup = 0, acumTriInf = 0;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < N; j++){
			if(i < j){
				acumTriSup += PRODUCCION[i][j];
			}else if(i > j && i < N){
				acumTriInf += PRODUCCION[i][j];
			}
		}
	}
	if(acumTriSup > acumTriInf){
		men = "Si";
	}else{
		men = "No";
	}
	cout << "\n\n11. " << men << " se realizó más producción en la triangular superior: " << acumTriSup << " que la inferior: "<< acumTriInf << endl;
	
		
	//Punto 12
	int arreglo[12*N], pos = 0;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < N; j++){
			arreglo[pos] = PRODUCCION[i][j] * 2;
			pos++;
		}
	}

	bool band = true;

    for(int i = 0; i < (12*N)-1 && band; i++){
        band = false;
        for (int j = 0; j < (12*N)-i-1; j++){
            if (arreglo[j] > arreglo[j+1]){
                int aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
                band = true;
            }
        }
    }

	pos = 0;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < N; j++){
			PRODUCCION[i][j] = arreglo[pos];
			pos++;
		}
	}


	cout << "\n12. Matriz con producciones duplicadas en orden: " << endl;	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			cout << PRODUCCION[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}