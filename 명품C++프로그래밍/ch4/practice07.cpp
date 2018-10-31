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
    Circle c[3];int count=0;
    for(int i=0;i<3;i++){
        int n;
        cout<<"원 "<<i+1<<"의 반지름 >> ";
        cin>>n;
        c[i].setRadius(n); 
        if(c[i].getArea()>100)
            count++;
    }
    cout<<"면적이 100보다 큰 원은 "<<count<<"개 입니다."<<endl; 
}
