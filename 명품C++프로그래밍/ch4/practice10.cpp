#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(string name){this->name = name;}
    Person(){this->name = "";}
    string getName(){return name;}
    void setName(string name){
        this->name = name;
    }
};

class Family{
    Person *p;
    int size;
public:
    Family(string name, int size);
    void show();
    void setName(int idx,string name);
    ~Family();
};
Family::Family(string name, int size){
    this->size = size;
    p = new Person[size];
}
void Family::show(){
    cout<<p->getName()<<"가족은 다음과 같이 "<<size<<"명 입니다."<<endl; 
    for(int i=0;i<size;i++){
        cout<<p[i].getName()<<"   ";
    }
}
void Family::setName(int idx,string name){
    p[idx].setName(name);
}
Family::~Family(){
    delete [] p;
}
int main(){
    Family *simpson = new Family("Simpson",3);
    simpson->setName(0,"Mr.Simpson");
    simpson->setName(1,"Mr.Simpson");
    simpson->setName(2,"Bart Simpson");
    simpson->show();
    delete simpson;
}
