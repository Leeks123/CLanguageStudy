#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
    string tel;
public:
    Person(){};
    string getName(){return name;}
    string getTel(){return tel;}
    void set(string name,string tel){
        this->name = name;
        this->tel = tel;
    };
};
int main(){
    cout<<"�̸��� ��ȭ ��ȣ�� �Է��� �ּ���."<<endl;
    Person p[3];
    for(int i=0;i<3;i++){
        string name,tel;
        cout<<"��� "<<i+1<<">> ";
        cin>>name>>tel;
        p[i].set(name,tel);
    }  
    cout<<"��� ����� �̸��� "<<p[0].getName()<<" "<<p[1].getName()<<" "<<p[2].getName()<<endl;
    
    cout<<"��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
    string name;
    cin>>name;
    for(int i=0;i<3;i++){
        if(p[i].getName().compare(name)==0)
            cout<<"��ȭ ��ȣ�� "<<p[i].getTel()<<endl;
    }  
}
