#include <iostream>

using namespace std;

int main(){
    cout<<"***** �¸��忡 ���� ���� ȯ���մϴ�. *****"<<endl;
    
    while(true){
        cout<<"«��:1, ¥��:2, ������:3, ����:4>>";
        int select;
        cin>>select;
        if(select==4){
            cout<<"���� ������ �������ϴ�.";
            break;
        }else if(select>4){
             cout<<"�ٽ� �ֹ��ϼ���!!"<<endl;
             continue;
        }
        cout<<"�� �κ�?";
        int num;
        cin>>num; 
        switch(select){
            case 1:
                cout<<"«�� "<<num<<"�κ� ���Խ��ϴ�."<<endl;
                break; 
            case 2:
                cout<<"¥�� "<<num<<"�κ� ���Խ��ϴ�."<<endl;
                break;              
            case 3:
                cout<<"������ "<<num<<"�κ� ���Խ��ϴ�."<<endl;
                break;  
            default:
               break;
        }
    } 
}
