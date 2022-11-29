#include<iostream>
#include <clocale>
#include <iomanip>
using namespace std;

int main() {
	//Configurar precisión y tildes
	setlocale(LC_CTYPE, "spanish");
	cout.precision(2);
	cout.setf(ios::fixed);


	//Definir y llenar vectores
	string MESES[12] = { "ENERO","FEBRERO","MARZO","ABRIL","","JUNIO","JULIO","AGOSTO","SEPTIEMBRE","OCTUBRE","NOVIEMBRE","DICIEMBRE" };
	MESES[4] = "MAYO";
	int N;
	
	//Terminar de mostrar mensaje y leer N.
	cout << "Ingrese el número de jugueterías: ";
	//cin >> N;
	N = 10;
	string* JUGUETERIAS = new string[N]{ "ToysLandia","Didatoys","OutletToy","Niñolandia","San Diego","RediToys","MagicToys","Mark Landia","Happy Eureka","ToysX" };

	//Definir matriz dinámica
	int **JUGUETERIA;
	JUGUETERIA = new int*[12];
	for (int i = 0; i < 12; i++){
		JUGUETERIA[i] = new int[N];
	}
	
	//Quemar datos de la matriz JUGUETERIA
	JUGUETERIA[0][0] = 29007600;
	JUGUETERIA[0][1] = 14202841;
	JUGUETERIA[0][2] = 4294491;
	JUGUETERIA[0][3] = 7943976;
	JUGUETERIA[0][4] = 28189792;
	JUGUETERIA[0][5] = 0;
	JUGUETERIA[0][6] = 10681280;
	JUGUETERIA[0][7] = 15601030;
	JUGUETERIA[0][8] = 10284943;
	JUGUETERIA[0][9] = 15742551;
	JUGUETERIA[1][0] = 3078619;
	JUGUETERIA[1][1] = 31588090;
	JUGUETERIA[1][2] = 28592266;
	JUGUETERIA[1][3] = 3896918;
	JUGUETERIA[1][4] = 6924869;
	JUGUETERIA[1][5] = 15327780;
	JUGUETERIA[1][6] = 18425329;
	JUGUETERIA[1][7] = 8515215;
	JUGUETERIA[1][8] = 7077472;
	JUGUETERIA[1][9] = 27720812;
	JUGUETERIA[2][0] = 1821639;
	JUGUETERIA[2][1] = 0;
	JUGUETERIA[2][2] = 33183615;
	JUGUETERIA[2][3] = 5565533;
	JUGUETERIA[2][4] = 24753110;
	JUGUETERIA[2][5] = 15566032;
	JUGUETERIA[2][6] = 37476290;
	JUGUETERIA[2][7] = 0;
	JUGUETERIA[2][8] = 26606060;
	JUGUETERIA[2][9] = 2572930;
	JUGUETERIA[3][0] = 0;
	JUGUETERIA[3][1] = 24870956;
	JUGUETERIA[3][2] = 20769327;
	JUGUETERIA[3][3] = 36358853;
	JUGUETERIA[3][4] = 36541379;
	JUGUETERIA[3][5] = 5638735;
	JUGUETERIA[3][6] = 29517907;
	JUGUETERIA[3][7] = 12931916;
	JUGUETERIA[3][8] = 30399500;
	JUGUETERIA[3][9] = 21323917;
	JUGUETERIA[4][0] = 17227523;
	JUGUETERIA[4][1] = 2629811;
	JUGUETERIA[4][2] = 29339870;
	JUGUETERIA[4][3] = 4986826;
	JUGUETERIA[4][4] = 36120276;
	JUGUETERIA[4][5] = 9407977;
	JUGUETERIA[4][6] = 23797030;
	JUGUETERIA[4][7] = 33591483;
	JUGUETERIA[4][8] = 28780719;
	JUGUETERIA[4][9] = 16883077;
	JUGUETERIA[5][0] = 9356147;
	JUGUETERIA[5][1] = 17453954;
	JUGUETERIA[5][2] = 24849972;
	JUGUETERIA[5][3] = 14646702;
	JUGUETERIA[5][4] = 14079090;
	JUGUETERIA[5][5] = 25972374;
	JUGUETERIA[5][6] = 36870113;
	JUGUETERIA[5][7] = 19815622;
	JUGUETERIA[5][8] = 12815242;
	JUGUETERIA[5][9] = 28293658;
	JUGUETERIA[6][0] = 26046579;
	JUGUETERIA[6][1] = 16554564;
	JUGUETERIA[6][2] = 4668167;
	JUGUETERIA[6][3] = 37327582;
	JUGUETERIA[6][4] = 27589586;
	JUGUETERIA[6][5] = 18472558;
	JUGUETERIA[6][6] = 29683371;
	JUGUETERIA[6][7] = 34647591;
	JUGUETERIA[6][8] = 3427755;
	JUGUETERIA[6][9] = 31622904;
	JUGUETERIA[7][0] = 26649972;
	JUGUETERIA[7][1] = 21719897;
	JUGUETERIA[7][2] = 29456947;
	JUGUETERIA[7][3] = 23444002;
	JUGUETERIA[7][4] = 5551125;
	JUGUETERIA[7][5] = 6976050;
	JUGUETERIA[7][6] = 31948064;
	JUGUETERIA[7][7] = 21560163;
	JUGUETERIA[7][8] = 29139565;
	JUGUETERIA[7][9] = 38696505;
	JUGUETERIA[8][0] = 26680267;
	JUGUETERIA[8][1] = 11467949;
	JUGUETERIA[8][2] = 30303812;
	JUGUETERIA[8][3] = 31347353;
	JUGUETERIA[8][4] = 9832426;
	JUGUETERIA[8][5] = 12105231;
	JUGUETERIA[8][6] = 4842371;
	JUGUETERIA[8][7] = 36824175;
	JUGUETERIA[8][8] = 11051809;
	JUGUETERIA[8][9] = 38665230;
	JUGUETERIA[9][0] = 27556810;
	JUGUETERIA[9][1] = 9214216;
	JUGUETERIA[9][2] = 14691024;
	JUGUETERIA[9][3] = 11363606;
	JUGUETERIA[9][4] = 0;
	JUGUETERIA[9][5] = 3793419;
	JUGUETERIA[9][6] = 25059967;
	JUGUETERIA[9][7] = 29088857;
	JUGUETERIA[9][8] = 0;
	JUGUETERIA[9][9] = 6559790;
	JUGUETERIA[10][0] = 25509781;
	JUGUETERIA[10][1] = 12261988;
	JUGUETERIA[10][2] = 28910028;
	JUGUETERIA[10][3] = 19541385;
	JUGUETERIA[10][4] = 7462792;
	JUGUETERIA[10][5] = 6721307;
	JUGUETERIA[10][6] = 15189112;
	JUGUETERIA[10][7] = 13620401;
	JUGUETERIA[10][8] = 17922323;
	JUGUETERIA[10][9] = 1758839;
	JUGUETERIA[11][0] = 36509101;
	JUGUETERIA[11][1] = 23951207;
	JUGUETERIA[11][2] = 35878948;
	JUGUETERIA[11][3] = 6328813;
	JUGUETERIA[11][4] = 17005933;
	JUGUETERIA[11][5] = 19053899;
	JUGUETERIA[11][6] = 0;
	JUGUETERIA[11][7] = 7622854;
	JUGUETERIA[11][8] = 26658266;
	JUGUETERIA[11][9] = 26516996;

	//TEMA DE MATRICES
	double tot = 0;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			tot += JUGUETERIA[i][j];
		}
	}
	int promGen = tot / (12.0*N);
	
	cout << "\n1. Promedio de compras de las JUGUETERÍAS durante el año actual: " <<  promGen << endl;

	int acum5Jug = 0;
	for (int i = 0; i < 12; i++){
		for (int j = 5; j < N; j++){
			acum5Jug += JUGUETERIA[i][j];
		}
	}
	
	cout << "\n2. Total al que ascienden las compras de las 5 últimas JUGUETERÍAS: " << acum5Jug << endl;

	int contPunt3 = 0;
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 2; j++){
			if(JUGUETERIA[i][j] == 0){
				contPunt3++;
			}
		}
	}
	
	cout << "\n3. Cantidad de compras iguales a cero en el primer semestre de las primeras 2 JUGUETERÍAS: " << contPunt3 << endl;

	int mayTrianSup = 0, mesMay, jugMay;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			if(i < j){
				if(JUGUETERIA[i][j] > mayTrianSup){
					mayTrianSup = JUGUETERIA[i][j];
					mesMay = i;
					jugMay = j;
				}
			}
		}
	}
	cout << "\n4. Mes y juguetería en el que se obtuvo la mayor compra en la triangular superior(así no sea matriz cuadrada, son los elementos por encima de diagonal principal).Imprimir el valor de la compra: \n\t" << MESES[mesMay] << "," << JUGUETERIAS[jugMay] << " venta: "<< mayTrianSup <<endl; 

	int menComp = 999999999, coorI, coorJ;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < N; j++){
			if(j == 1){
				j += 7;
			}
			if(JUGUETERIA[i][j] < menComp && JUGUETERIA[i][j] != 0){
				menComp = JUGUETERIA[i][j];
				coorI = i + 1;
				coorJ = j + 1;
			}
		}
	}
	cout << "\n5. Menor compra diferente de 0 de las 2 primeras y las 2 últimas JUGUETERÍAS.Imprimir las coordenadas(en base 1) \n\tCoordenadas[" << coorI << "][" << coorJ << "] venta: " << menComp << endl;


	cout << "\n6.	Porcentaje de compras superiores al promedio general en posiciones impares(usar acumuladores para este punto): " << endl;
	cout << "\n7. Promedio de compras en la matriz que formen una (así la matriz no sea cuadrada, recuerde hasta donde se debe recorrer en las filas)" << endl;

	//PUNTOS DE TEMA DE COMBINACIÓN DE VECTORES Y MATRICES
	//Puntos del 8 al 11 x JUGUETERIA

	double promJug[N];
	for (int j = 0; j < N; j++){
		int acumJug = 0;
		for (int i = 0; i < 12; i++){
			acumJug += JUGUETERIA[i][j];
		}
		promJug[j] = acumJug / 12.0;
	}
	
	cout << "\n8. Promedio de compras de cada JUGUETERÍA: " << endl;
	for(int i = 0; i < N; i++){
		cout << "\t" << JUGUETERIAS[i] << ": " << promJug[i] << endl;
	}

	int compInf10[N];
	for (int j = 0; j < N; j++){
		int acumJug = 0;
		for (int i = 0; i < 12; i++){
			if(JUGUETERIA[i][j] < 10000000){
				acumJug += JUGUETERIA[i][j];
			}
		}
		compInf10[j] = acumJug;
	}

	cout << "\n9. Total compras inferiores a 10'000.000 de cada JUGUETERÍA: " << endl;
	for(int i = 0; i < N; i++){
		cout << "\t" << JUGUETERIAS[i] << ": " << compInf10[i] << endl;
	}

	int compAlt[N] = {};
	for (int j = 0; j < N; j++){
		for (int i = 0; i < 12; i++){
			if(JUGUETERIA[i][j] > compAlt[j]){
				compAlt[j] = JUGUETERIA[i][j];
			}
		}
	}

	cout << "\n10. Valor compra más alto de cada JUGUETERÍA: " << endl;
	for(int i = 0; i < N; i++){
		cout << "\t" << JUGUETERIAS[i] << ": " << compAlt[i] << endl;
	}

	int compBaja[N];
	for (int j = 0; j < N; j++){
		int men = 999999999;
		for (int i = 0; i < 12; i++){
			if(JUGUETERIA[i][j] < men && JUGUETERIA[i][j] != 0){
				men = JUGUETERIA[i][j];
			}
		}
		compBaja[j] = men;
	}

	cout << "\n11. Valor compra más baja de cada JUGUETERÍA: " << endl;
	for(int i = 0; i < N; i++){
		cout << "\t" << JUGUETERIAS[i] << ": " << compBaja[i] << endl;
	}


	//Puntos del 12 al 15 x MESES
	int compMay10[12];
	for (int i = 0; i < 12; i++){
		int cont = 0;
		for (int j = 0; j < N;j++){
			if(JUGUETERIA[i][j] > 10000000){
				cont++;
			}
		}
		compMay10[i] = cont;
	}

	cout << "\n12. Cantidad de compras >10'000.000 de cada mes: " << endl;
	for(int i = 0; i < 12; i++){
		cout << "\t" << MESES[i] << ": " << compMay10[i] << endl;
	}

	int compMay[12] = {};
	for (int i = 0; i < 12; i++){
		int cont = 0;
		for (int j = 0; j < N;j++){
			if(JUGUETERIA[i][j] > compMay[i] && JUGUETERIA[i][j] % 3 == 0){
				compMay[i] = JUGUETERIA[i][j];
			}
		}
	}

	cout << "\n13. Compra mayor y mult de 3 de cada mes: " << endl;
	for(int i = 0; i < 12; i++){
		cout << "\t" << MESES[i] << ": " << compMay[i] << endl;
	}

	double porcCompMult10[12];
	for (int i = 0; i < 12; i++){
		int cont = 0;
		for (int j = 0; j < N;j++){
			if(JUGUETERIA[i][j] % 10 == 0 && JUGUETERIA[i][j] != 0){
				cont++;
			}
		}
		porcCompMult10[i] = cont / (double)N * 100;
	}

	cout << "\n14. Porcentaje de compras mult de 10 cada mes: " << endl;
	for(int i = 0; i < 12; i++){
		cout << "\t" << MESES[i] << ": " << porcCompMult10[i] << "%" << endl;
	}

	int compMenImp[12];
	for (int i = 0; i < 12; i++){
		int men = 99999999;
		for (int j = 0; j < N;j++){
			if(JUGUETERIA[i][j] < men && JUGUETERIA[i][j] % 2 == 1){
				men = JUGUETERIA[i][j];
			}
		}
		compMenImp[i] = men;
	}

	cout << "\n15. Compra menor e impar de cada mes: " << endl;
	for(int i = 0; i < 12; i++){
		cout << "\t" << MESES[i] << ": " << compMenImp[i] << endl;
	}

	//PUNTOS DE TEMA DE VECTORES
	//Puntos del 16 al 22

	return 0;
}