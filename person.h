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
    void set_App(int hrs, int ms);
    string get_Name();
    int get_ID();
    int get_Age();
    int get_AppHrs();
    int get_AppMins();
    void printinfo();
};