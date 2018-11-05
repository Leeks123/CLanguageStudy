#include <iostream>

using namespace std;

class Matrix{
    int arr[4];
public:
    Matrix(int a=0,int b=0,int c=0,int d=0){
        arr[0]=a;   arr[1]=b;
        arr[2]=c;   arr[3]=d;
    }
    void show(){
        cout<<"Matrix = { "<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<' '<<arr[3]<<' '<<"}"<<endl;
    }
    Matrix& operator+(Matrix op){
        int tmp[4];
        for(int i=0;i<4;i++){
            tmp[i]=this->arr[i]+op.arr[i];
        }
        Matrix ret(tmp[0],tmp[1],tmp[2],tmp[3]);
        return ret;
    }
    Matrix& operator+=(Matrix op){
        for(int i=0;i<4;i++){
            this->arr[i]=this->arr[i]+op.arr[i];
        }
        return *this;
    }
    bool operator==(Matrix op){
        for(int i=0;i<4;i++){
            if(this->arr[i]==op.arr[i])
                continue;
            else
                return false;
        }
        return true;
    }
    friend void operator>>(Matrix a,int x[]);
    friend void operator<<(Matrix& b,int y[]);
};
void operator>>(Matrix a,int x[]){
    for(int i=0;i<4;i++){
        x[i]=a.arr[i];
    }
}
void operator<<(Matrix& b,int y[]){
    int arr1=y[0],arr2=y[1],arr3=y[2],arr4=y[3];
    Matrix tmp(arr1,arr2,arr3,arr4);
    b = tmp;
}
int main(){
    Matrix a(4,3,2,1),b;
    int x[4],y[4]={1,2,3,4};
    a>>x;
    b<<y;
    
    for(int i=0;i<4;i++) cout<<x[i]<<' ';
    cout<<endl;
    b.show();
}
