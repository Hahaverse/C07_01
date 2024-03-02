//2023111359 �ְ���
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

//���⿡ Date Ŭ������ ����Լ��� �����ϼ���.
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
    cout << year << "�� " << month << "�� " << day << "��"<<endl;
}

class Employee {
    // (Ŭ���� �����)
    // ���⿡ Date Ŭ���� ��� ������ ������ 
    // Employee Ŭ���� ������� �߰��ϼ���.
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

//���⿡ Employee Ŭ������ ����Լ��� �����ϼ���.
Employee::Employee() {
    name = "";
}
Employee::Employee(string n, Date b, Date h) : name(n), birth(b), hire(h) {}
Employee::~Employee() {}
void Employee::print() {
    cout << "��  �� : " << name << endl;
    cout << "��  �� : ";
    birth.print();
    cout << "�Ի��� : ";
    hire.print();
}

int main() {
    Date bir(2001, 10, 01);
    Date hir(2020, 10, 01);
    Employee emp;
    emp.print();
    return 0;
}