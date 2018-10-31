#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Date {
    int year,month,day;
public:
    Date(int y,int m,int d);
    Date(string date);
    int getYear();
    int getMonth();
    int getDay();
    void show();
};
Date::Date(int y,int m,int d){
    year = y;
    month = m;
    day = d;
}
Date::Date(string date){
    for(int i=0;i<3;i++){
        int idx = date.find("/");
        if(i==0){
            year = atoi(date.substr(0,idx).c_str());date.erase(0,idx+1);
        }else if(i==1){
            month = atoi(date.substr(0,idx).c_str());date.erase(0,idx+1);
        }else{
            day = atoi(date.substr(0,idx).c_str());date.erase(0,idx+1);
        }
    }
}
int Date::getYear(){
    return year;
}
int Date::getMonth(){
    return month;
}
int Date::getDay(){
    return day;
}
void Date::show(){
    cout<<year<<"³â "<<month<<"¿ù "<<day<<"ÀÏ "<<endl; 
}
int main(){
    Date birth(2014,3,20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout<<birth.getYear()<<','<<birth.getMonth()<<','<<birth.getDay()<<endl;
}
