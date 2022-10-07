#include<iostream>
#include<string>
#include"person.h"
using namespace std;

class Customer : public  Person
{
private:
    int MechanicID;
    Appointment appt;
public:
    Customer(int MechId, int hr, int min);
    void set_MechID(int MechID);
    void set_Appt(int hr, int mins);
    Appointment get_Appt();
    int get_MechID() const;
    bool operator <(const Appointment& x);
    bool operator >(const Appointment& x);
    bool operator ==(const Appointment& x);
    void printinfo();
};