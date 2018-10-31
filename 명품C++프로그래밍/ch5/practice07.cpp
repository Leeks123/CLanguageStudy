#include <iostream>

using namespace std;

class MyIntStack{
    int p[10];
    int tos=0;
public:
    MyIntStack(){
    };
    bool push(int n){
        if(tos<10){
            p[tos]=n;
            tos++;
            return true;
        }
        else if(tos==10){
            p[tos]=n;
            tos=9;
            return false;
        }
    }
    bool pop(int &n){
        if(tos==-1){
           n = p[tos];
           p[tos]=NULL;
           return false;
        }else if(tos>-1){
            n = p[tos];
            p[tos]=NULL;
            tos--;
            return true;
        }  
    }
};
int main(){
    MyIntStack a;
    for(int i=0;i<11;i++){
        if(a.push(i)) cout<<i<<' ';
        else cout<<endl<<i+1<<" 번째 stack full"<<endl;
    }
    int n;
    for(int i=0;i<11;i++){
        if(a.pop(n))cout<<n<<' ';
        else cout<<endl<<i+1<<" 번째 stack empty";
    }
    cout<<endl;
}
