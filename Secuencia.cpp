#include <iostream>
using namespace std;

int main(){
    int N, may = 0;

    while (true){
        cin>> N;
        if(N==0)break;
        if(N>may){
            may = N;
        }
    }
    cout<< may << endl;    
    
    return 0;
}