#include <iostream>

using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=0){
        this->radius = radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
    void swap(Circle &c){
        Circle tmp;
        tmp = c;
        c = *this;
        *this = tmp;
    }
};
int main(){
    Circle donut(1);
    Circle pizza(10);
    
    cout<<donut.getArea()<<endl;
    cout<<pizza.getArea()<<endl;
    
    donut.swap(pizza);
    cout<<donut.getArea()<<endl;
    cout<<pizza.getArea()<<endl;
}
