#include <iostream>
using namespace std;

int main(){
    int *vec , n, aux, posMin;
    cin >> n;
    vec = new int[n];

    for(int i = 0; i < n-1 ; i++){
        posMin = i;
        for (int j = i + 1; j < n; j++){
            if (vec[j] < vec[posMin]){
                posMin = j;
            }
        }
        aux = vec[posMin];
        vec[posMin] = vec[i];
        vec[i] = aux;
    }
    
    return 0;
}