#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string str;
    cout<<"�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)"<<endl;
    while(1){
        cout<<">>";
        getline(cin,str,'\n');
        if(str.compare("exit")==0)
            break;
        srand(time(0));
        int n = rand()%str.length();
        str[n] = (char)(rand()%25+97);
        cout<<"  "<<str<<endl;
    } 
}
