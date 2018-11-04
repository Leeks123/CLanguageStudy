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
    cout<<"1���� 100���� ������ ���� 10���� ����մϴ�."<<endl;
    for(int i=0;i<10;i++){
        cout<<r.nextInt(1,100)<<' ';
    }
    cout<<endl<<"���ĺ��� �����ϰ� 10���� ����մϴ�."<<endl;
    for(int i=0;i<10;i++){
        cout<<r.nextAlphabet()<<' ';
    }
    cout<<endl<<"�Ǽ��� �����ϰ� 10���� ����մϴ�."<<endl;
    for(int i=0;i<10;i++){
        if(i==5) cout<<endl;
        cout<<r.nextDouble()<<' ';
    }
}
