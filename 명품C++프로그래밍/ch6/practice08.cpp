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
    static void print(string tag="��� "){
        cout<<"-------"<<tag<<"�±��� Trace ������ ����մϴ�. -------"<<endl; 
        for(int i=0;i<10;i++){
            if(tag.compare(str[i][0])==0){
                cout<<str[i][0]<<":"<<str[i][1]<<endl;continue;
            }else if(tag.compare("��� ")==0){
                if(str[i][0].compare("")==0) break;
                cout<<str[i][0]<<":"<<str[i][1]<<endl;continue;
            }
        }
    };
};
string Trace::str[10][2]={"","","","","","","","","","","","","","","","","","","",""};

void f() {
    int a,b,c;
    cout<<"�� ���� ������ �Է��ϼ���>> ";
    cin>>a>>b;
    Trace::put("f()","������ �Է¹���");
    c = a+b;
    Trace::put("f()","�� ���");
    cout<<"���� "<<c<<endl; 
}

int main(){
    Trace::put("main()","���α׷��� �����մϴ�.");
    f();
    Trace::put("main()","���α׷��� �����մϴ�.");
    
    Trace::print("f()");
    Trace::print(); 
}
