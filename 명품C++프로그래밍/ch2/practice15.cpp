#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main(){
    char str[50];
    char calc[3];
    char s[3][50];
    while(true){
        cout<<"? ";
        for(int i=0;i<3;i++){
            cin.getline(str,50,' '); 
            strncpy(s[i],str,10);
        }
       //cout<<s[1]<<"..."<<endl;
      
        int a=atoi(s[0]);
        int b=atoi(s[2]);
          
        if(strcmp(s[1],"+")==0){
            cout<<a<<" "<<s[1]<<" "<<b<<" = "<<a+b<<endl;
        }
        else if(strcmp(s[1],"-")==0){
            cout<<a<<" "<<s[1]<<" "<<b<<" = "<<a-b<<endl;
        }else if(strcmp(s[1],"/")==0){
            if(b==0){
                cout<<"불능"<<endl<<"retry";
                continue;
            }
            cout<<a<<" "<<s[1]<<" "<<b<<" = "<<a/b<<endl;
        }else if(strcmp(s[1],"*")==0){
            cout<<a<<" "<<s[1]<<" "<<b<<" = "<<a*b<<endl;
        }else  
            cout<<"연산자를 잘못입력하였습니다."<<endl; 
    }
}
