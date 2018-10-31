#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Random {
    
public:
    Random();
    int next();
    int nextInRange(int a,int b);
};
Random::Random(){}   

int Random::next(){
    //srand(time(NULL));
    return (int)rand();
}
int Random::nextInRange(int a,int b){
    //srand(time(NULL));
    while(1){
        int r = (int)rand()%b+1;
        if(r>=a)
            return r;
    }
}
int main(){
    Random r;
    cout<<"-- 0���� "<<RAND_MAX<<"������ ���� ���� 10 ��--"<<endl;
    for(int i=0;i<10;i++){
        int n = r.next();
        cout<<n<<' ';
    } 
    cout<<endl<<endl<<"-- 2����"<<"4 ������ �������� 10 ��--"<<endl;
    for(int i=0;i<10;i++){
        int n = r.nextInRange(2,4);
        cout<<n<<' ';
    } 
    cout<<endl;
}
