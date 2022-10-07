#include"person.h"


Person::Person(string nm="",int id=0,int age=0){Name=nm;ID=id;Age=age;}
void Person::set_Name(string nm){Name=nm;}
void Person::set_ID(int id){ID=id;}
void Person::set_Age(int age){Age=age;}
string Person::get_Name() const {return Name;}
int Person::get_ID() const {return ID;}
int Person::get_Age() const {return Age;}