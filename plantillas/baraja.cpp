#include <iostream>
using namespace std;

int main(){
    int *vec , n, aux;
    cin >> n;
    vec = new int[n];

    for(int i = 0; i < n ; i++){
        for (int j = i; j > 0 && vec[j] < vec[j-1]; j++){
                aux = vec[j-1];
                vec[j-1] = vec[j];
                vec[j] = aux;
        }
    }
    return 0;
}