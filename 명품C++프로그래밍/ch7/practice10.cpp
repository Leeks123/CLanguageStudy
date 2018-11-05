#include <iostream>
using namespace std;
class Statistics {
    int x[20];
    int count;
public:
    Statistics(){
        count = 0;
        //x[20]={0,};
    }
    bool operator!();
    Statistics& operator<<(int op);
    void operator>>(int& avg);
    void operator~();
};

bool Statistics::operator!(){
    if(count==0)
        return true;
    else
        return false;
}
Statistics& Statistics::operator<<(int op){
    x[count++]=op;
    
    return *this;
}
void Statistics::operator>>(int& avg){
    int sum=0;
    for(int i=0;i<count;i++){
        sum+=x[i];
    }
    if(count!=0)
        avg = sum/count;
    else
        avg = 0;
}
void Statistics::operator~(){
    for(int i=0;i<count;i++){
        cout<<x[i]<<' ';
    }
    cout<<endl;
}
int main(){
    Statistics stat;
    if(!stat) cout<<"현재 통계 데이타가 없습니다."<<endl;
    
    int x[5];
    cout<<"5 개의 정수를 입력하라 >> ";
    for(int i=0;i<5;i++) cin>>x[i];
    
    for(int i=0;i<5;i++) stat << x[i];//
    stat << 100 <<200;
    ~stat;
    
    int avg;
    stat >> avg;
    cout<< "avg="<<avg<<endl;
}
