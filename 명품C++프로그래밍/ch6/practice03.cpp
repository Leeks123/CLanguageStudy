#include <iostream>
#include <string>

using namespace std;
int Big(int x,int y,int z=100){
    int ret = x>y?x:y;
    if(ret>z)
        return z;
    else
        return ret;
}
int main(){
    int x = Big(3,5);//5
    int y = Big(300,60);//100
    int z = Big(30,60,50);
    
    cout<<x<<' '<<y<<' '<<z<<endl;
}

