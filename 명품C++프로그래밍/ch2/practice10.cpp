#include <iostream>

using namespace std;

int main(){
    cout<<"���ڿ� �Է�>>";
    char str[50];
    cin.getline(str,50);
    
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    } 
}
