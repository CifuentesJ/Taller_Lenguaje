#include <iostream>
using namespace std;

int main(){
    int N, lat, vaso, acum = 0;

    cin>> N;
    for (int i = 0; i < N; i++){
        cin>> lat >> vaso;
        if(lat>vaso){
            acum+=vaso;
        }
    }
    
    cout<< acum << endl;

    return 0;
}