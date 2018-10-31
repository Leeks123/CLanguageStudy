#include <iostream>
#include <string>

using namespace std;
class Histogram {
    string str;
    char alp[26]={};
    int acount=0;
public:
    Histogram(string str){
        this->str = str;
    }
    void put(string str){
        this->str.append(str);    
    }
    void putc(char c){
        string s(&c); 
        this->str.append(s);
    }
    void print();
    int count(){
        for(int i=0;i<str.length();i++){
            for(int j=0;j<26;j++){
                if(str[i]==j+65||str[i]==j+97)
                    alp[j]++;
                    acount++;
            }
        }
        return acount;
    }
};
void Histogram::print(){
    cout<<"ÃÑ ¾ËÆÄºª ¼ö "<<count()<<endl<<endl;
    for(int i=0;i<26;i++){
        printf("%c (%d)   : ",i+65,alp[i]);
        for(int j=0;j<alp[i];j++)
            cout<<"*";
        cout<<endl;
    } 
}
int main(){
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help,");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}
