#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"���ڿ� �Է�>>";
    string str;
    getline(cin,str,'\n');
    
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a')
            count++;
    } 
    cout<<"���� a�� "<<count<<"�� �ֽ��ϴ�."<<endl;
    
    int index=0;count=0;
    while(1){
        index = str.find("a",index)+1;
        if(index==0)
            break;
        else
            count++;
    } 
    cout<<"���� a�� "<<count<<"�� �ֽ��ϴ�."<<endl;
}
