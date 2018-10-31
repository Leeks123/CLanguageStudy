#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player{
    string name;
public:
    Player(){}
    Player(string name){
        this->name = name;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
};
class Gambling{
    int fin=0;
    int turn=0;
public:
    Player p[2];
    void getResult();
    void msg();
    void Run();
};

void Gambling::getResult(){
    srand(time(0));
    int slot[3];
    for(int i=0;i<3;i++){
        slot[i]=(int)rand()%3;
        cout<<slot[i]<<"      ";
    }
    if(slot[0]==slot[1]&&slot[0]==slot[2])
        fin = 1;
    else
        fin = 0;
}
void Gambling::msg(){
    if(fin)
        cout<<p[turn].getName()<<"�� �¸�"<<endl;
    else
        cout<<"�ƽ�����!"<<endl; 
}
void Gambling::Run(){
    cout<<"***** ���� ������ �����մϴ�. *****"<<endl;
    string name;
    cout<<"ù��° ���� �̸�>>";
    cin>>name;p[0].setName(name);
    cout<<"�ι�° ���� �̸�>>";
    cin>>name;p[1].setName(name);cin.get();
    while(1){
        cout<<p[turn].getName()<<":<Enter>";
        cin.get();
        cout<<"             ";
        getResult();msg();
        if(fin)
            break;
            
        if(turn)
            turn=0;
        else
            turn=1;
                
    }
}
int main(){
    Gambling g;
    g.Run();
}
