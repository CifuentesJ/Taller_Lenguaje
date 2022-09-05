#include <iostream>
using namespace std;

int main(){
    int *vec , n, aux;
    cin >> n;
    vec = new int[n];

    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if (vec[j] > vec[j+1]){
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }
        }
    }
    return 0;
}