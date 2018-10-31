#include <iostream>

using namespace std;

int main(){
    cout<<"***** 승리장에 오신 것을 환영합니다. *****"<<endl;
    
    while(true){
        cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
        int select;
        cin>>select;
        if(select==4){
            cout<<"오늘 영업은 끝났습니다.";
            break;
        }else if(select>4){
             cout<<"다시 주문하세요!!"<<endl;
             continue;
        }
        cout<<"몇 인분?";
        int num;
        cin>>num; 
        switch(select){
            case 1:
                cout<<"짬뽕 "<<num<<"인분 나왔습니다."<<endl;
                break; 
            case 2:
                cout<<"짜장 "<<num<<"인분 나왔습니다."<<endl;
                break;              
            case 3:
                cout<<"군만두 "<<num<<"인분 나왔습니다."<<endl;
                break;  
            default:
               break;
        }
    } 
}
