#include <iostream>

using namespace std;

class Add{
    int a,b;
public:
    void setValue(int x,int y);
    int calculate();    
};
void Add::setValue(int x,int y){
    a = x;
    b = y;
}
int Add::calculate(){
    return a+b;
}

class Div{
    int a,b;
public:
    void setValue(int x,int y);
    int calculate();    
};
void Div::setValue(int x,int y){
    a = x;
    b = y;
}
int Div::calculate(){
    return a/b;
}

class Sub{
    int a,b;
public:
    void setValue(int x,int y);
    int calculate();    
};
void Sub::setValue(int x,int y){
    a = x;
    b = y;
}
int Sub::calculate(){
    return a-b;
}

class Mul{
    int a,b;
public:
    void setValue(int x,int y);
    int calculate();    
};
void Mul::setValue(int x,int y){
    a = x;
    b = y;
}
int Mul::calculate(){
    return a*b;
}

int main(){
    Sub s;Add a;Mul m;Div d;
    int x,y;
    char op;
    while(1){
        cout<<"두 정수와 연산자를 입력하세요>>";
        cin>>x>>y>>op;
        switch(op){
            case '+':
                a.setValue(x,y);
                cout<<a.calculate()<<endl;
                break;
            case '-':
                s.setValue(x,y);
                cout<<s.calculate()<<endl;
                break;
            case '/':
                d.setValue(x,y);
                cout<<d.calculate()<<endl;
                break;
            case '*':
                m.setValue(x,y);
                cout<<m.calculate()<<endl;
                break;
            defalut:
                cout<<"error";
        }
    }
}
