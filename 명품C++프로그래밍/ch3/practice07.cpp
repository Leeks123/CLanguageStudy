#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class SelectableRandom {
    int n;
public:
    SelectableRandom(int i);
    int next();
    int nextInRange(int a,int b);
};
SelectableRandom::SelectableRandom(int i){
    n = i%2;
}   

int SelectableRandom::next(){
     int r = (int)rand();
    if(r%2==n)
        return r;
    else
        return r+1;
}
int SelectableRandom::nextInRange(int a,int b){
    while(1){
        int r = (int)rand()%b+1;
        if(r>=a&&r<b){
            if(r%2==n)
                return r;
            else
                return r+1;
        }
    }
}
int main(){
    SelectableRandom r1(1),r2(2);
    cout<<"-- 0���� "<<RAND_MAX<<"������ ���� ¦�� ���� 10 ��--"<<endl;
    for(int i=0;i<10;i++){
        int n = r2.next();
        cout<<n<<' ';
    } 
    cout<<endl<<endl<<"-- 2����"<<"4 ������ ���� Ȧ�� ���� 10 ��--"<<endl;
    for(int i=0;i<10;i++){
        int n = r1.nextInRange(2,4);
        cout<<n<<' ';
    } 
    cout<<endl;
}
