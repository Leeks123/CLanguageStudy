#include <iostream>

using namespace std;

class Color{
    int r,g,b;
public:
    Color(int r=0,int g=0,int b=0){
        this->r=r;this->g=g;this->b=b;
    }
    Color& operator+(Color op){
        Color tmp;
        tmp.r = this->r+op.r;
        tmp.g = this->g+op.g;
        tmp.b = this->b+op.b;
        return tmp;
    }
    bool operator==(Color& op){
        if(this->r==op.r&& this->g==op.g&&this->b==op.b)
            return true;
        else 
            return false;
    }
    void show(){
        cout<<r<<' '<<g<<' '<<b<<endl;
    }
};
int main(){
    Color red(255,0,0),blue(0,0,255),c;
    c = red + blue;
    c.show();
        
    Color fuchsia(255,0,255);
    if(c==fuchsia)
        cout<<"����� ����";
    else
        cout<<"����� �ƴ�"; 
}
