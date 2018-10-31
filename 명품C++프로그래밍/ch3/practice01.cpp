#include <iostream>

using namespace std;

class Tower {
    int height;
public:
    Tower();
    Tower(int n);
    int getHeight();
};

Tower::Tower(){
    height = 1;
}
Tower::Tower(int n){
    height = n;
}
int Tower::getHeight(){
    return height;
}

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout<<"���̴� "<<myTower.getHeight()<<"����"<<endl;
    cout<<"���̴� "<<seoulTower.getHeight()<<"����"<<endl;
}
