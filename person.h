#ifndef _XXX_
#define _XXX_
#include<iostream>
#include<string>
using namespace std;

struct Appointment{
    int hours;
    int mins;
};

class Person{
private:
    string Name;
    int ID;
    int Age;
    Appointment appointTime;
public:
    Person(){Name="";ID=0;Age=0;}
    void set_Name(string nm){Name=nm;}
    void set_ID(int id){ID=id;}
    void set_Age(int age){Age=age;}
    string get_Name() const {return Name;}
    int get_ID() const {return ID;}
    int get_Age() const {return Age;}
    virtual void set_Appt(int hrs, int ms) = 0;
    virtual Appointment get_Appt() const = 0;
    virtual void printinfo() = 0;
};
#endif