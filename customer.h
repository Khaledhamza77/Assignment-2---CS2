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
    Customer(int MechId=0, int hr=0, int min=0){
        MechanicID=MechId;
        set_Appt(hr,min);
    }
    void set_MechID(int MechID){MechanicID=MechID;}
    int get_MechID() const{return MechanicID;}
    bool operator <(const Customer& x){
        if(this->appt.hours<x.appt.hours) return true;
        else if(this->appt.hours==x.appt.hours){
            if(this->appt.mins<x.appt.mins) return true;
            else return false;
        }
        else return false;
    }
    bool operator >(const Customer& x){
        if(this->appt.hours>x.appt.hours) return true;
        else if(this->appt.hours==x.appt.hours){
            if(this->appt.mins>x.appt.mins) return true;
            else return false;
        }
        else return false;
    }
    bool operator == (const Customer& x){
        return (this->appt.hours==x.appt.hours && this->appt.mins==x.appt.mins);
    }
    void set_Appt(int hrs, int ms){
        if(hrs<0||hrs>24)
            cout<<"Please enter a number between 0 and 24 inclusive!\n";
        else
            appt.hours=hrs;
        if(ms<0||ms>60)
            cout<<"Please enter a number between 0 and 60 inclusive!\n";
        else
            appt.mins=ms;
    }
    Appointment get_Appt() const {return appt;}
    void printinfo(){
        cout<<"Client's information:\n";
        cout<<"Name: "<<get_Name()<<"\n";
        cout<<"ID: "<<get_ID()<<"\n";
        cout<<"Age: "<<get_Age()<<"\n";
        cout<<"Assigned Mechanic ID: "<<MechanicID<<"\n";
        cout<<"Appointment time is: "<<appt.hours<<":"<<appt.mins<<"\n";
    }
};