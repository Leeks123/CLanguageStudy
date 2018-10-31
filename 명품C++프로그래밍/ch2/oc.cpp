#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

string Juliet();
void cmpRSP(string r,string j);

int main(){
    cout<<"가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요."<<endl;
    cout<<"로미오>>";
    string romeo;cin>>romeo;
    cout<<"줄리엣>>";
    string juliet=Juliet();
    cout<<juliet<<endl;
    
    cmpRSP(romeo,juliet); 
    return 0;
}
string Juliet(){
    srand(time(NULL));
    int r = rand()/3;
    if(r==0)
        return "바위";
    else if(r==1)
        return "가위";
    else 
        return "보"; 
}
void cmpRSP(string r,string j){
    if(r==j)
        cout<<"비겼습니다."<<endl; 
    else if(r=="가위"&&j=="바위")
        cout<<"줄리엣이 이겼습니다."<<endl;
    else if(r=="가위"&&j=="보")
        cout<<"로미오가 이겼습니다."<<endl;
    else if(r=="바위"&&j=="보")
        cout<<"줄리엣이 이겼습니다."<<endl;
    else if(r=="바위"&&j=="가위")
        cout<<"로미오가 이겼습니다."<<endl;
    else if(r=="보"&&j=="가위")
        cout<<"줄리엣이 이겼습니다."<<endl;
    else if(r=="보"&&j=="바위")
        cout<<"로미오가 이겼습니다."<<endl;
    else
        cout<<"가위 바위 보를 내세요.";
}

