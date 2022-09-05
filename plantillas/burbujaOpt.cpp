#include <iostream>
using namespace std;

int main(){
    int *vec , n, aux;
    cin >> n;
    vec = new int[n];
    bool band = true;

    for(int i = 0; i < n-1 && band; i++){
        band = false;
        for (int j = 0; j < n-i-1; j++){
            if (vec[j] > vec[j+1]){
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
                band = true;
            }
        }
    }
    return 0;
}