#include <iostream>

using namespace std;

int main(){
    cout<<"5���� �Ǽ��� �Է��϶�>>";
    double arr[5]={0, };
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    
    double big = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>big)
           big=arr[i];  
    } 
    cout<<"ū �� = "<<big<<endl; 
}
