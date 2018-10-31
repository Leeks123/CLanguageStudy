#include <iostream>
#include <string>

using namespace std;

class Circle{
    int radius;
    string name;
public:
    void setCircle(string name,int radius){
        this->name = name;
        this->radius = radius;
    }
    double getArea(){
        return (double)(3.14*radius*radius);
    }
    string getName(){
        return name;
    }
};
class CircleManager{
    int size;
public:
    Circle *p;
    CircleManager(int size){
        this->size = size;
        p = new Circle[size];
    }
    ~CircleManager(){
        delete [] p;
    }
    void searchByName(string name){
        for(int i=0;i<size;i++){
            if(p[i].getName()==name){
                cout<<name<<"�� ������ "<<p[i].getArea()<<endl;
                return;
            }
        }
        cout<<name<<"�̶�� ���� �����ϴ�"<<endl; 
    }
    void searchByArea(int n){
        cout<<n<<"���� ū ���� �˻��մϴ�."<<endl;
        for(int i=0;i<size;i++){
            if(p[i].getArea()>n){
                cout<<p[i].getName()<<"�� ������ "<<p[i].getArea()<<endl;
            }
        }
    }
};
int main(){
    int n;
    cout<<"���� ���� >> ";
    cin>>n;
    CircleManager c(n);
    for(int i=0;i<n;i++){
        string name;int radius; 
        cout<<"�� "<<i+1<<"�� �̸��� ������ >> ";
        cin>>name>>radius;
        c.p[i].setCircle(name,radius);
    }
    cout<<"�˻��ϰ��� �ϴ� ���� �̸� >> ";
    string name;
    cin>>name;
    c.searchByName(name);
    cout<<"�ּ� ������ ������ �Է��ϼ��� >> ";
    int area;
    cin>>area;
    c.searchByArea(area); 
}
