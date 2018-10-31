#include <iostream>

using namespace std;
void half(double& n){
    n= n/2;
}
void half2(double n){
    n= n/2;
}
int main(){
    double n =20;
    half2(n);
    cout<<n<<endl;
    half(n);
    cout<<n;    
}
