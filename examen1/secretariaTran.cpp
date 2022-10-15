/*En la secretaria de transito de la ciudad de Medellín se tiene un arreglo de X cantidad de posiciones llamado INFRA2021 donde están las placas de los vehículos que registraron infracciones de tránsito en el año 2021 y en otro arreglo de Y posiciones llamado INFRA2022 están las placas de los vehículos que registraron infracciones en el año 2022.
Se pide plantear una solución en la cual le permita a un funcionario de la secretaria de transito leer el número de placa de un vehículo e imprima un mensaje indicando si el vehículo debería ser multado o no. Se multa al vehíclo cuyo conductor haya cometido una infracción en alguno de los dos últimos años. Si se da el caso que tenga infracciones en ambos años consecutivos, mostrar un mensaje que indidque que debe ser multado e inmovilizado.
Para realizar este proceso usar búsqueda secuencial optimizada en el primer vector y búsqueda binaria en el segundo vector (ordenamiento por burbuja optimizado).*/
#include <iostream>
using namespace std;


int main() {
    string *infra2021, *infra2022, clave;
    int X, Y, pos2021 = 0, pos2022 = 0;
    bool band2021 = false, band2022 = false;
    cin >> X >> Y;
    
    infra2021 = new string[X];
    infra2022 = new string[Y];
    
    for (int i = 0; i < X; i++){
        cin >> infra2021[i];
    }
    for (int i = 0; i < Y; i++){
        cin >> infra2022[i];
    }
    
    cin >> clave;
    
    for (int i = 0; i < X; i++){
        if(clave == infra2021[i]){
            band2021 = true;
            break;
        }
        pos2021++;
    }
    for (int i = 0; i < Y; i++){
        if(clave == infra2022[i]){
            band2022 = true;
            break;
        }
        pos2022++;
    }
    
    if(band2021 && band2022){
        cout << "DEBE SER MULTADO E INMOVILIZADO. PLACA ENCONTRADA EN POSICIONES " <<  pos2021 << " Y " << pos2022 << "."<< endl;
    }else if (band2021){
        cout << "DEBE SER MULTADO. PLACA ENCONTRADA EN POSICION " <<  pos2021 << " EN EL ARREGLO INFRA2021." << endl;
    } else if (band2022){
        cout << "DEBE SER MULTADO. PLACA ENCONTRADA EN POSICION " <<  pos2022 << " EN EL ARREGLO INFRA2022." << endl;
    }else{
        cout << "NO DEBE SER MULTADO." << endl;
    }
    
    
    return 0;
}