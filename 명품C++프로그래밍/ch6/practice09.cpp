#include <iostream>
#include <string>

using namespace std;

class Board{
    static string str[20];
    static int count;
public:
    static void add(string s){
        if(count==20)
            return ;
        str[count]=s;
        count++;
    };
    static void print(){
        cout<<"************* �Խ����Դϴ�. *************"<<endl;
        for(int i=0;i<count;i++){
            cout<<i<<": "<<str[i]<<endl;
        } 
    };        
};
int Board::count = 0;
string Board::str[20];
int main(){
    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���"); 
    Board::print();
    Board::add("���Ҹ��л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}

