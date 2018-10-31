#include <iostream>

using namespace std;

class CoffeeMachine {
    int coffee,water,sugar;
public:
    CoffeeMachine(int c,int w,int s);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void show();
    void fill();    
};
CoffeeMachine::CoffeeMachine(int c,int w,int s){
    coffee = c;
    water = w;
    sugar = s;
}
void CoffeeMachine::drinkEspresso(){
    if(coffee>1&&water>1){
        coffee -=1;water -=1;
    }else
        cout<<"fill the machine"<<endl;
}
void CoffeeMachine::drinkAmericano(){
    if(coffee>1&&water>2){
        coffee -=1;water -=2;
    }else
        cout<<"fill the machine"<<endl;
}
void CoffeeMachine::drinkSugarCoffee(){
    if(coffee>1&&water>2&&sugar>1){
        coffee -=1;water -=2;sugar -=1;
    }else
        cout<<"fill the machine"<<endl;
}
void CoffeeMachine::show(){
    cout<<"커피 머신 상태, 커피:"<<coffee<<" 물:"<<water<<" 설탕:"<<sugar<<endl; 
}
void CoffeeMachine::fill(){
    coffee = 10;
    water = 10;
    sugar = 10;
}

int main(){
    CoffeeMachine java(5,10,3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}
