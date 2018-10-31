#include <iostream>
#include <string>

using namespace std;

string combine(string s1,string s2,string& s3){
    s3 = s1+" "+s2;
    return s3;
}
int main(){
    string text1("I love you"),text2("very much");
    string text3;
    combine(text1,text2,text3);
    cout<<text3;    
}
