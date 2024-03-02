#include <iostream>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date();
    Date(int y, int m, int d);
    ~Date();
    int getY();
    int getM();
    int getD();
    void setY(int y);
    void setM(int m);
    void setD(int d);
    void print();
};

//여기에 Date 클래스의 멤버함수를 구현하세요.
Date::Date() {
    year = 0;
    month = 0;
    day = 0;
}
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}
Date::~Date() {}
int Date::getY() { 
    return year;
}
int Date::getM() { 
    return month; 
}
int Date::getD() { 
    return day; 
}
void Date::setY(int y) { 
    year = y;
}
void Date::setM(int m) { 
    month = m;
}
void Date::setD(int d) {
    day = d;
}
void Date::print() {
    cout << year << "년 " << month << "월 " << day << "일"<<endl;
}

class Employee {
    // (클래스 선언부)
    // 여기에 Date 클래스 멤버 변수를 포함한 
    // Employee 클래스 멤버들을 추가하세요.
private:
    string name;
    Date birth;
    Date hire;
public:
    Employee();
    Employee(string n, Date bir, Date hir);
    ~Employee();
    void print();
};

//여기에 Employee 클래스의 멤버함수를 구현하세요.
Employee::Employee() {
    name = "";
}
Employee::Employee(string n, Date b, Date h) : name(n), birth(b), hire(h) {}
Employee::~Employee() {}
void Employee::print() {
    cout << "이  름 : " << name << endl;
    cout << "생  일 : ";
    birth.print();
    cout << "입사일 : ";
    hire.print();
}

int main() {
    Date bir(2001, 10, 01);
    Date hir(2020, 10, 01);
    Employee emp("홍길동", bir, hir);
    emp.print();
    return 0;
}
