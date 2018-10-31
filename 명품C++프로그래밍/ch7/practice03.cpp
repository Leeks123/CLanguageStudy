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
    friend bool operator!(Book& op);
    
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
    /*bool operator!(){
        if(this->price == 0)
            return true;
        else
            return false;
    }*/
};
bool operator!(Book& op){
    if(op.price == 0)
            return true;
        else
            return false;
}
int main(){
    Book book("벼룩시장",0,50);
    if(!book) cout<<"공짜다!"<<endl; 
}
