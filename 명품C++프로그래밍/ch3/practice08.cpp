#include <iostream>
#include <string>

using namespace std;

class Integer{
    int i;
public:
    Integer(int n){
        i = n;
    };
    Integer(string n){
        i = stoi(n);//C++11에서만 되는듯 
    };
    int get(){
        return i;
    }
    int isEven(){
        if(i%2==0)
            return 1;
        else
            return 0;
    }
    void set(int n){
        i = n;
    }
};
int main(){
    Integer n(30);
    cout<<n.get()<<' ';
    n.set(50);
    cout<<n.get()<<' ';
    
    Integer m("300");
    cout<<m.get()<<' ';
    cout<<m.isEven();
}
