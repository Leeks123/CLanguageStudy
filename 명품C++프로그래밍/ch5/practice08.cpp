#include <iostream>

using namespace std;

class MyIntStack{
    int *p;
    int size;
    int tos;
public:
    MyIntStack();
    MyIntStack(int size){
        this->size = size;
        p = new int[size];
        tos = 0;
    }
    MyIntStack(MyIntStack& s){
        this->size = s.size;
        this->p = new int[size];
        for(int i=0;i<size;i++){
            p[i] = s.p[i];
        }
        this->tos = s.tos;
    }
    ~MyIntStack(){
        delete [] p;
    };
    bool push(int n){
        if(tos<10){
            tos++;
            p[tos]=n;
            
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
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);
    
    int n;
    a.pop(n);
    cout<<"스택 a에서 팝한 값 "<<n<<endl;
    b.pop(n);
    cout<<"스택 b에서 팝한 값 "<<n<<endl;
}
