#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"�� ��ȣ�� �Է��ϼ���>>";
    string passwd;
    cin>>passwd;
    cout<<"�� ��ȣ�� �ٽ� �Է��ϼ���>>";
    string cmppasswd;
    cin>>cmppasswd;
    
    if(passwd==cmppasswd)
        cout<<"�����ϴ�.";
    else
        cout<<"�ٸ��ϴ�.";
     
}
