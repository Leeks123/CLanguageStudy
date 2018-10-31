#include <iostream>

using namespace std;

bool bigger(int a,int b,int& big){
    if(a==b){
        return true;
    }
    else{
        big= (a>b?a:b);
        cout<<big<<endl;   
        return false;
    }
}
int main(){
    int a,b;int k=4;
    //int &big = k; 
    cout<<"a와 b를 입력하시오 >> ";
    cin>>a>>b;
    cout<<bigger(a,b,k)<<"  "<<k;
    
}
