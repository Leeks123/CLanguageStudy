#include <iostream>

using namespace std;

int main(){
    cout<<"문자열 입력>>";
    char str[50];
    cin.getline(str,50);
    
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    } 
}
