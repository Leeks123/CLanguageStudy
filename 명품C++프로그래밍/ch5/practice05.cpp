#include <iostream>

using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=0){
        this->radius = radius;
    }
    int getRadius(){return radius;}
    void setRadius(int r){radius = r;}
    void show(){ cout<<"반지름이 "<<radius<<"인 원"<<endl; }
};

void increasedBy(Circle& a,Circle b){
    int r = a.getRadius()+b.getRadius();
    a.setRadius(r);
}

int main(){
    Circle x(10),y(5);
    increasedBy(x,y);
    x.show();
}
