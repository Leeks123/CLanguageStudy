#include <iostream>
#include <cstring>

using namespace std;

int main(){
    cout<<"���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�."<<endl;
    char coffee[100];
    int num=0;
    int money=0;
    while(true){
        if(money>=20000){
            cout<<"���� "<<money<<"���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~"<<endl; 
            break;
        }
        cout<<"�ֹ�>>";
        cin>>coffee>>num;
        if(strcmp(coffee,"����������")==0){
            cout<<2000*num<<"���Դϴ�. ���ְ� �弼��."<<endl;
            money+=2000*num;
        }
        else if(strcmp(coffee,"�Ƹ޸�ī��")==0){
            cout<<2300*num<<"���Դϴ�. ���ְ� �弼��."<<endl;
            money+=2300*num;
        }
        else if(strcmp(coffee,"īǪġ��")==0){
            cout<<2500*num<<"���Դϴ�. ���ְ� �弼��."<<endl;
            money+=2500*num;
        } 
        else
            cout<<"�߸� �ֹ��ϼ̽��ϴ�."<<endl; 
    }
     
}
