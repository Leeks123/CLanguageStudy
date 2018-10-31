#include <iostream>

using namespace std;

int main(){
    cout<<"5개의 실수를 입력하라>>";
    double arr[5]={0, };
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    
    double big = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>big)
           big=arr[i];  
    } 
    cout<<"큰 수 = "<<big<<endl; 
}
