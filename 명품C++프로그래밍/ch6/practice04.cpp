#include <iostream>

using namespace std;

class MyVector{
    int *mem;
    int size;
public:
    MyVector(int n=100,int val=0);
    ~MyVector(){delete [] mem;}
    void show(){ cout<< size<<' '<<mem[0]<<endl; }
};
MyVector::MyVector(int n,int val){
    mem = new int[n];
    size  = n;
    for(int i=0;i<size;i++) mem[i]=val;
}
int main(){
    MyVector v1,v2(30,5);
    v1.show();
    v2.show();
}    
    
