#include <iostream>

using namespace std;
typedef struct _person {
    char name[20];
    char address[100];
    int age;
}Person;
int main(void){
    Person p;
    cout<<"�̸���?";
    cin.getline(p.name,20); 
    cout<<"�ּҴ�?";
    cin.getline(p.address,100);
    cout<<"���̴�?";
    cin>>p.age;
    
    cout<<p.name<<", "<<p.address<<", "<<p.age<<"��"<<endl;
    
}
