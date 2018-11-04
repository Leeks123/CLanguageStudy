#include <iostream>
#include <string>
using namespace std;

class Trace{
    static string str[10][2];
public:
    static void put(string tag,string state){
        for(int i=0;i<10;i++){
            if(str[i][0].compare("")==0){
                str[i][0]=tag;str[i][1]=state;break;
            }else continue;
        }   
    };
    static void print(string tag="모든 "){
        cout<<"-------"<<tag<<"태그의 Trace 정보를 출력합니다. -------"<<endl; 
        for(int i=0;i<10;i++){
            if(tag.compare(str[i][0])==0){
                cout<<str[i][0]<<":"<<str[i][1]<<endl;continue;
            }else if(tag.compare("모든 ")==0){
                if(str[i][0].compare("")==0) break;
                cout<<str[i][0]<<":"<<str[i][1]<<endl;continue;
            }
        }
    };
};
string Trace::str[10][2]={"","","","","","","","","","","","","","","","","","","",""};

void f() {
    int a,b,c;
    cout<<"두 개의 정수를 입력하세요>> ";
    cin>>a>>b;
    Trace::put("f()","정수를 입력받음");
    c = a+b;
    Trace::put("f()","합 계산");
    cout<<"합은 "<<c<<endl; 
}

int main(){
    Trace::put("main()","프로그램을 시작합니다.");
    f();
    Trace::put("main()","프로그램을 종료합니다.");
    
    Trace::print("f()");
    Trace::print(); 
}
