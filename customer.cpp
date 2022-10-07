#include"customer.h"

Customer::Customer(int MechId, int hr, int min){
    MechanicID=MechId;
    set_Appt(hr,min);
}
void Customer::set_MechID(int MechID){MechanicID=MechID;}
int Customer::get_MechID() const{return MechanicID;}
bool Customer::operator <(const Appointment& x){
    if(this->appt.hours<x.hours) return true;
    else if(this->appt.hours==x.hours){
        if(this->appt.mins<x.mins) return true;
        else return false;
    }
    else return false;
}
bool Customer::operator >(const Appointment& x){
    if(this->appt.hours>x.hours) return true;
    else if(this->appt.hours==x.hours){
        if(this->appt.mins>x.mins) return true;
        else return false;
    }
    else return false;
}
bool Customer::operator == (const Appointment& x){
    return (this->appt.hours==x.hours && this->appt.mins==x.mins);
}
void Customer::set_Appt(int hrs, int ms){
    if(hrs<0||hrs>24)
        cout<<"Please enter a number between 0 and 24 inclusive!\n";
    else
        appt.hours=hrs;
    if(ms<0||ms>60)
        cout<<"Please enter a number between 0 and 60 inclusive!\n";
    else
        appt.mins=ms;
}
Appointment Customer::get_Appt() const {return appt;}
void Customer::printinfo(){
    cout<<"Client's information:\n";
    cout<<"Name: "<<get_Name()<<"\n";
    cout<<"ID: "<<get_ID()<<"\n";
    cout<<"Age: "<<get_Age()<<"\n";
    cout<<"Assigned Mechanic ID: "<<MechanicID<<"\n";
    cout<<"Appointment time is: "<<appt.hours<<":"<<appt.mins<<"\n";
}