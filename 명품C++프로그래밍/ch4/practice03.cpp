#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"문자열 입력>>";
    string str;
    getline(cin,str,'\n');
    
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a')
            count++;
    } 
    cout<<"문자 a는 "<<count<<"개 있습니다."<<endl;
    
    int index=0;count=0;
    while(1){
        index = str.find("a",index)+1;
        if(index==0)
            break;
        else
            count++;
    } 
    cout<<"문자 a는 "<<count<<"개 있습니다."<<endl;
}
