#include"person.h"


Person::Person(string nm="",int id=0,int age=0){Name=nm;ID=id;Age=age;}
void Person::set_Name(string nm){Name=nm;}
void Person::set_ID(int id){ID=id;}
void Person::set_Age(int age){Age=age;}
void Person::set_App(int hrs, int ms){
    if(hrs<0||hrs>24)
        cout<<"Please enter a number between 0 and 24 inclusive!\n";
    else
        appointTime.hours=hrs;
    if(ms<0||ms>60)
        cout<<"Please enter a number between 0 and 60 inclusive!\n";
    else
        appointTime.mins=ms;
}
string Person::get_Name(){return Name;}
int Person::get_ID(){return ID;}
int Person::get_Age(){return Age;}
int Person::get_AppHrs(){return appointTime.hours;}
int Person::get_AppMins(){return appointTime.mins;}
void Person::printinfo(){
    cout<<"Client's information:\n";
    cout<<"Name: "<<Name<<"\n";
    cout<<"ID: "<<ID<<"\n";
    cout<<"Age: "<<Age<<"\n";
    cout<<"Appointment time is: "<<appointTime.hours<<":"<<appointTime.mins<<"\n";
}