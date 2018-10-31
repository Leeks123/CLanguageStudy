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
                cout<<name<<"의 면적은 "<<p[i].getArea()<<endl;
                return;
            }
        }
        cout<<name<<"이라는 원이 없습니다"<<endl; 
    }
    void searchByArea(int n){
        cout<<n<<"보다 큰 원을 검색합니다."<<endl;
        for(int i=0;i<size;i++){
            if(p[i].getArea()>n){
                cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<endl;
            }
        }
    }
};
int main(){
    int n;
    cout<<"원의 개수 >> ";
    cin>>n;
    CircleManager c(n);
    for(int i=0;i<n;i++){
        string name;int radius; 
        cout<<"원 "<<i+1<<"의 이름과 반지름 >> ";
        cin>>name>>radius;
        c.p[i].setCircle(name,radius);
    }
    cout<<"검색하고자 하는 원의 이름 >> ";
    string name;
    cin>>name;
    c.searchByName(name);
    cout<<"최소 면적을 정수로 입력하세요 >> ";
    int area;
    cin>>area;
    c.searchByArea(area); 
}
