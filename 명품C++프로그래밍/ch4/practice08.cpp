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
    cout<<"원의 개수 >> ";
    int n;
    cin>>n;
    Circle *p = new Circle[n]; 
    int count=0;
    for(int i=0;i<n;i++){
        int n;
        cout<<"원 "<<i+1<<"의 반지름 >> ";
        cin>>n;
        p[i].setRadius(n); 
        if(p[i].getArea()>100)
            count++;
    }
    cout<<"면적이 100보다 큰 원은 "<<count<<"개 입니다."<<endl; 
}
