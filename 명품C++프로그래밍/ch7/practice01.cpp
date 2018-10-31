#include <iostream>
#include <string>

using namespace std;
//class Book;
//Book& operator+=(int x);
//Book& operator-=(int x);
class Book {
    string title;
    int price,pages;
public:
    Book(string title="",int price =0,int pages=0){
        this->title = title;this->price = price;this->pages=pages;
    }
    void show(){
        cout<<title<<' '<<price<<"�� "<<pages<<" ������"<<endl; 
    }
    string getTitle(){return title;}
    friend Book& operator+=(Book& op1,int op2);
    friend Book& operator-=(Book& op1,int op2);
   /* Book operator+=(int x){
        this->price+=x;
        return *this;    
    }
    Book operator-=(int x){
        this->price-=x;
        return *this;    
    }*/
};

Book& operator+=(Book& op1,int op2){
    op1.price+=op2;
    return op1;    
}
Book& operator-=(Book& op1,int op2){
    op1.price-=op2;
    return op1;    
}


int main(){
    Book a("û��",20000,300), b("�̷�",30000,500);
    a += 500;
    b -= 500;
    a.show();
    b.show(); 
}

