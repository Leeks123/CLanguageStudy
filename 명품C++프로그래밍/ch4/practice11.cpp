#include <iostream>
#include <string>

using namespace std;

class Container{
    int size;
public:
    Container(){size=10;}
    void fill(){this->size = 10;}
    void consume(){
        if(size ==0)
            cout<<"���ᰡ �����մϴ�."<<endl;
        else 
            this->size -=1;
    }
    int getSize(){
        return size;
    }
};
class CoffeeVendingMachine{
    Container tong[3];
    void fill(){
        for(int i=0;i<3;i++)
            tong[i].fill();
    }
    void selectEspresso(){
        tong[0].consume();
        tong[1].consume();
    }
    void selectAmericano(){
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
    }
    void selectSugarCoffee(){
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
        tong[2].consume();
    }
    void show(){
        cout<<"Ŀ�� "<<tong[0].getSize()<<",�� "<<tong[1].getSize()<<",���� "<<tong[2].getSize()<<endl; 
    }
public:
    void run();
};
void CoffeeVendingMachine::run(){
    cout<<"***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****"<<endl;
    while(1){
        cout<<"�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
        int select;
        cin>>select;
        switch(select){
            case 1:
                cout<<"���������� �弼��"<<endl;
                selectEspresso();
                break;
            case 2:
                cout<<"�Ƹ޸�ī�� �弼��"<<endl;
                selectAmericano();
                break;
            case 3:
                cout<<"����Ŀ�� �弼��"<<endl;
                selectSugarCoffee();
                break;
            case 4:
                show();
                break;
            case 5:
                fill();
                show();
                break;
            default:
                break;
        } 
    }
}


int main(){
    CoffeeVendingMachine a;
    a.run();
}
