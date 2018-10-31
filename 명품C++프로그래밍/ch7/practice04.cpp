#include <iostream>
#include <string>

using namespace std;

class Book {
    string title;
    int price,pages;
public:
    Book(string title="",int price =0,int pages=0){
        this->title = title;this->price = price;this->pages=pages;
    }
    void show(){
        cout<<title<<' '<<price<<"원 "<<pages<<" 페이지"<<endl; 
    }
    string getTitle(){return title;}
    friend bool operator<(string op1,Book& op2);
    Book operator+=(int x){
        this->price+=x;
        return *this;    
    }
    Book operator-=(int x){
        this->price-=x;
        return *this;    
    }
    bool operator==(int price){
        if(this->price == price)
            return true;
        else
            return false;
    }
    bool operator==(string title){
        if(this->title == title)
            return true;
        else
            return false;
    }
    bool operator==(Book& op){
        if(this->price == op.price&&this->title == title)
            return true;
        else
            return false;
    }
    bool operator!(){
        if(this->price == 0)
            return true;
        else
            return false;
    }
    
};
bool operator<(string op1,Book& op2){
    if(op1.compare(op2.title)<0)
        return true;
    else
        return false;
}
int main(){
    Book a("청춘",20000,300);
    string b;
    cout << "책 이름을 입력하새요>> ";
    getline(cin,b);
    if(b<a)
        cout<<a.getTitle()<<"이 "<<b<<"보다 뒤에 있구나!!"<<endl; 
}
