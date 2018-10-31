#include <iostream>
#include <string>
using namespace std;

class Account {
    int balance;
    string name;
    int id;
public:
    Account(string n,int i,int b);
    string getOwner();
    int inquiry();
    void deposit(int d);
    int withdraw(int w);
};

Account::Account(string n,int i,int b){
    name = n;
    balance = b;
    id = i;
}
string Account::getOwner(){
    return name;
}
int Account::inquiry(){
    return balance;
}
void Account::deposit(int d){
    balance += d;
}
int Account::withdraw(int w){
    if(balance>=w){
        balance -= w;
        return w;
    }else{
        cout<<"�ܰ� �����Ͽ� ������ �� �����ϴ�."<<endl;
        return 0; 
    }
}
int main(){
    Account a("kitae",1,5000);
    a.deposit(50000);
    cout<<a.getOwner()<<"�� �ܾ��� "<<a.inquiry()<<endl;
    int money = a.withdraw(20000);
    cout<<a.getOwner()<<"�� �ܾ��� "<<a.inquiry()<<endl;    
}
