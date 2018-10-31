#include <iostream>

using namespace std;
typedef struct _person {
    char name[20];
    char address[100];
    int age;
}Person;
int main(void){
    Person p;
    cout<<"이름은?";
    cin.getline(p.name,20); 
    cout<<"주소는?";
    cin.getline(p.address,100);
    cout<<"나이는?";
    cin>>p.age;
    
    cout<<p.name<<", "<<p.address<<", "<<p.age<<"세"<<endl;
    
}
