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
    Person(string nm="",int id=0,int age=0);
    void set_Name(string nm);
    void set_ID(int id);
    void set_Age(int age);
    string get_Name() const;
    int get_ID() const;
    int get_Age() const;
    virtual void set_Appt(int hrs, int ms) = 0;
    virtual Appointment get_Appt() = 0;
    virtual void printinfo() = 0;
};