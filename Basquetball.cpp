#include <iostream>
using namespace std;

int main(){
    int dis, point;

    cin>> dis;

    if(dis<=800){
        point = 1;
    }else if(dis<=1400){
        point = 2;
    }else if(dis<=2000){
        point = 3;
    }

    cout<< point << endl;

    return 0;
}