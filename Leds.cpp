#include <iostream>
using namespace std;

int main(){
    int N, acum, len;
    string num;
    
    cin>> N;

    for (int i = 0; i < N; i++){
        acum = 0;
        cin>> num;
        len = size(num);

        for (int i = 0; i < len; i++){
            switch (num[i]){
            case '1': acum+=2; break;
            case '2': case '3': case '5': acum+=5; break;
            case '4': acum+=4; break;
            case '6': case '0': case '9': acum+=6; break;
            case '7': acum+=3; break;
            case '8': acum+=7; break;
            }
        }
        
        cout<< acum << " leds" << endl;
    }
    
    return 0;
}