#include <iostream>

using namespace std;

class Circle{
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};
void Circle::setRadius(int radius){
    this->radius = radius;
}
double Circle::getArea(){
    return 3.14*radius*radius;
}
int main(){
    cout<<"���� ���� >> ";
    int n;
    cin>>n;
    Circle *p = new Circle[n]; 
    int count=0;
    for(int i=0;i<n;i++){
        int n;
        cout<<"�� "<<i+1<<"�� ������ >> ";
        cin>>n;
        p[i].setRadius(n); 
        if(p[i].getArea()>100)
            count++;
    }
    cout<<"������ 100���� ū ���� "<<count<<"�� �Դϴ�."<<endl; 
}
