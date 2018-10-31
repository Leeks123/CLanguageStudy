#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"5 명의 이름을 ';'으로 구분하여 입력하세요"<<endl<<">>";
    char str[100];
    string s[5];
    int maxlen;
    int maxidx;
    for(int i=0;i<5;i++){
       cin.getline(str,100,';');
       s[i]=str;
    }
    maxlen = s[0].length();
    maxidx = 0;
    for(int i=0;i<5;i++){
        cout<<i<<" : "<<s[i]<<endl;
        if(s[i].length()>maxlen){
            maxlen=s[i].length();
            maxidx=i;
        }
    }
    
    cout<<"가장 긴 이름은 "+s[maxidx]<<endl;
}
