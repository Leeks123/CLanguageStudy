#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)"<<endl;
    while(1){
        cout<<">>";
        getline(cin,str,'\n');
        if(str.compare("exit")==0)
            break;
        string rstr = "";
        for(int i=0;i<str.length();i++){
            rstr.insert(i,str.substr(str.length()-i-1,1));
        }
        cout<<"  "<<rstr<<endl;
    } 
}
