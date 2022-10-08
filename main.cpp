#include<fstream>
#include<iostream>
#include<string>
#include"person.h"
#include"customer.h"
#include"mechanic.h"
#include"queue.h"
using namespace std;

int main(){
    Queue<Customer> qu(11);
    Queue<Mechanic> qu2(3);//There are 3 mechanics

    ifstream myfile;
    myfile.open("mechanics.txt");
    string mytext[18];//18 is the number of lines in mechanics.txt
    for(int i=0;i<18;i++){
        getline(myfile,mytext[i]);
    }
    int line=0;

for(int i=0;i<qu2.size();i++){
    Mechanic mech;
    mech.set_Name(mytext[line]);line++;
    mech.set_Age(stoi(mytext[line]));line++;
    mech.set_ID(stoi(mytext[line]));line++;
    mech.set_counter(stoi(mytext[line]));line++;
    int apptIndex=0;
    for(int x=line;x<(mech.get_counter()*2)+(line-1);x++){
        Appointment appt; appt.hours=stoi(mytext[x]); x++; appt.mins=stoi(mytext[x]);
        mech.set_Appointment(appt, apptIndex);apptIndex++;
        }
    line=(mech.get_counter()*2)+line;
    qu2.push(mech);
    }
    qu2.pop().printinfo();
    return 0;
}