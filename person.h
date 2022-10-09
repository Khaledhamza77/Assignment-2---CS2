#ifndef _XXX_
#define _XXX_
#include<iostream>
#include<string>
using namespace std;

class Person{
private:
    string Name;
    int ID;
    int Age;
public:
    Person(){Name="";ID=0;Age=0;}
    void set_Name(string nm){Name=nm;}
    void set_ID(int id){ID=id;}
    void set_Age(int age){Age=age;}
    string get_Name() const {return Name;}
    int get_ID() const {return ID;}
    int get_Age() const {return Age;}
    struct Appointment{int hours;int mins;};
    virtual void printinfo() = 0;
};
#endif