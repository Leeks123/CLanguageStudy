#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class EvenRandom {
    int select;
public:
    EvenRandom();
    int next();
    int nextInRange(int a,int b);
};
EvenRandom::EvenRandom(){
}   

int EvenRandom::next(){
    int r = (int)rand();
    if(r%2==0)
        return r;
    else
        return r+1; 
}
int EvenRandom::nextInRange(int a,int b){
    //srand(time(NULL));
    while(1){
        int r = (int)rand()%b+1;
        if(r>=a){
            if(r%2==0)
                return r;
            else
                return r+1;
        }
    }
}

int main(){
    EvenRandom r;
    cout<<"-- 0���� "<<RAND_MAX<<"������ ¦�� ���� ���� 10 ��--"<<endl;
    for(int i=0;i<10;i++){
        int n = r.next();
        cout<<n<<' ';
    } 
    cout<<endl<<endl<<"-- 2����"<<"4 ������ ���� ¦�� ���� 10 ��--"<<endl;
    for(int i=0;i<10;i++){
        int n = r.nextInRange(2,4);
        cout<<n<<' ';
    } 
    cout<<endl;
}
