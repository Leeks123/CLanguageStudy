#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
public:
    static void seed(){srand((unsigned)time(NULL));};
    static int nextInt(int min=0,int max=32767){return (int)rand()%max+min;}
    static char nextAlphabet(){return (char)(rand()%26+97);};
    static double nextDouble(){return (double)rand()/32767;}
};


int main(){
    Random r;
    r.seed();
    cout<<"1에서 100까지 랜덤한 정수 10개를 출력합니다."<<endl;
    for(int i=0;i<10;i++){
        cout<<r.nextInt(1,100)<<' ';
    }
    cout<<endl<<"알파벳을 랜덤하게 10개를 출력합니다."<<endl;
    for(int i=0;i<10;i++){
        cout<<r.nextAlphabet()<<' ';
    }
    cout<<endl<<"실수를 랜덤하게 10개를 출력합니다."<<endl;
    for(int i=0;i<10;i++){
        if(i==5) cout<<endl;
        cout<<r.nextDouble()<<' ';
    }
}
