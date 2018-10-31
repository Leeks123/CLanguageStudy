#include <iostream>

using namespace std;

class ArrayUtility{

public:
    static void intTodouble(int src[], double dest[], int size);
    static void doubleToint(double src[], int dest[], int size);
};
void ArrayUtility::intTodouble(int src[],double dest[],int size){
    for(int i=0;i<size;i++){
        dest[i] = (double)src[i];
    }
}

void ArrayUtility::doubleToint(double src[],int dest[],int size){
    for(int i=0;i<size;i++){
        dest[i] = (int)src[i];
    }
}
int main(){
    int x[] = {1,2,3,4,5};
    double y[5];
    double z[]={9.1,8.2,7.3,6.4,5.5};
    
    ArrayUtility::intTodouble(x,y,5);
    for(int i=0;i<5;i++) cout<<y[i]<<' ';
    cout<<endl;
    
    ArrayUtility::doubleToint(z,x,5);
    for(int i=0;i<5;i++) cout<<x[i]<<' ';
    cout<<endl;
    
}

