#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        cout<<"종료하고 싶으면 yes를 입력하세요>>";
        string input;char str[100];
        cin.getline(str,100);
        string stop = "yes";
        if(str==stop){
            cout<<"종료합니다...";break;
        }
        
    }
} 
