#include <iostream>

using namespace std;

int main(){
    cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다."<<endl<<"텍스트의 끝은 ;입니다. 10000개까지 가능합니다."<<endl;
    char str[10000]="";
    int alp[26]={0,};
    cin.getline(str,sizeof(str),';');
    int alpcount=0;
    for(int i=0;i<sizeof(str);i++){
        if((str[i]<=90&&65<=str[i])||(str[i]>=97&&str[i]<=122)){
            alpcount++;
            for(int j=0;j<26;j++){
                if(str[i]==65+j||str[i]==97+j){
                    alp[j]++;
                }
            }
        }
    }
    cout<<"총 알파벳 수 "<<alpcount<<endl;
    
    for(char c='a';c<='z';c++){
        cout<<c<<" ("<<alp[(int)(c-97)]<<")   : ";
        for(int i=0;i<alp[(int)(c-97)];i++){
            cout<<"*";
        }
        cout<<endl;
    }
     
}
