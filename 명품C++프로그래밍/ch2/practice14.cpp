#include <iostream>
#include <cstring>

using namespace std;

int main(){
    cout<<"에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다."<<endl;
    char coffee[100];
    int num=0;
    int money=0;
    while(true){
        if(money>=20000){
            cout<<"오늘 "<<money<<"원을 판매하여 카페를 닫습니다. 내일봐요~"<<endl; 
            break;
        }
        cout<<"주문>>";
        cin>>coffee>>num;
        if(strcmp(coffee,"에스프레소")==0){
            cout<<2000*num<<"원입니다. 맛있게 드세요."<<endl;
            money+=2000*num;
        }
        else if(strcmp(coffee,"아메리카노")==0){
            cout<<2300*num<<"원입니다. 맛있게 드세요."<<endl;
            money+=2300*num;
        }
        else if(strcmp(coffee,"카푸치노")==0){
            cout<<2500*num<<"원입니다. 맛있게 드세요."<<endl;
            money+=2500*num;
        } 
        else
            cout<<"잘못 주문하셨습니다."<<endl; 
    }
     
}
