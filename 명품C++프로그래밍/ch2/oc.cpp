#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

string Juliet();
void cmpRSP(string r,string j);

int main(){
    cout<<"���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���."<<endl;
    cout<<"�ι̿�>>";
    string romeo;cin>>romeo;
    cout<<"�ٸ���>>";
    string juliet=Juliet();
    cout<<juliet<<endl;
    
    cmpRSP(romeo,juliet); 
    return 0;
}
string Juliet(){
    srand(time(NULL));
    int r = rand()/3;
    if(r==0)
        return "����";
    else if(r==1)
        return "����";
    else 
        return "��"; 
}
void cmpRSP(string r,string j){
    if(r==j)
        cout<<"�����ϴ�."<<endl; 
    else if(r=="����"&&j=="����")
        cout<<"�ٸ����� �̰���ϴ�."<<endl;
    else if(r=="����"&&j=="��")
        cout<<"�ι̿��� �̰���ϴ�."<<endl;
    else if(r=="����"&&j=="��")
        cout<<"�ٸ����� �̰���ϴ�."<<endl;
    else if(r=="����"&&j=="����")
        cout<<"�ι̿��� �̰���ϴ�."<<endl;
    else if(r=="��"&&j=="����")
        cout<<"�ٸ����� �̰���ϴ�."<<endl;
    else if(r=="��"&&j=="����")
        cout<<"�ι̿��� �̰���ϴ�."<<endl;
    else
        cout<<"���� ���� ���� ������.";
}

