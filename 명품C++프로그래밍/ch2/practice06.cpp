#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"새 암호를 입력하세요>>";
    string passwd;
    cin>>passwd;
    cout<<"새 암호를 다시 입력하세요>>";
    string cmppasswd;
    cin>>cmppasswd;
    
    if(passwd==cmppasswd)
        cout<<"같습니다.";
    else
        cout<<"다릅니다.";
     
}
