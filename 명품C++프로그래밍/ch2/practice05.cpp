#include <iostream>

using namespace std;

int main(){
    cout<<"���ڵ��� �Է��϶�(100�� �̸�)."<<endl;
    char str[100];
    cin.getline(str,100);
    int count=0;
    for(int i=0;i<100;i++){
        if(str[i]=='x')
            count++;
    }
    cout<<"x�� ������ "<<count; 
}
