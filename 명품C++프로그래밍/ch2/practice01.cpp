#include <iostream>
#include <string>
using namespace std;

int main(){
    for(int i=1;i<10;i++){
        for(int j = 1;j<=10;j++){
            cout.width(3);cout.fill(' ');
            cout<<i*j;
            
        }
        cout<<endl;
    }
    return 0;
}

