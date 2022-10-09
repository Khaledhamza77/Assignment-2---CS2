#include<fstream>
#include<iostream>
#include<string>
#include"person.h"
#include"customer.h"
#include"mechanic.h"
#include"queue.h"
using namespace std;

void mechanic_info(Mechanic& mech, int& line){
    ifstream myfile;
    myfile.open("mechanics.txt");
    string mytext[18];//18 is the number of lines in mechanics.txt
    for(int i=0;i<18;i++){
        getline(myfile,mytext[i]);
    }
    mech.set_Name(mytext[line]);line++;
    mech.set_Age(stoi(mytext[line]));line++;
    mech.set_ID(stoi(mytext[line]));line++;
    mech.set_counter(stoi(mytext[line]));line++;
    int apptIndex=0;
    for(int x=line;x<(mech.get_counter()*2)+(line-1);x++){
        mech.set_Appt(stoi(mytext[x]),stoi(mytext[x+1]),apptIndex);x++;apptIndex++;
    }
    line=(mech.get_counter()*2)+line;
    myfile.close();
}

int main(){
    Queue<Customer> qu(11);
    Queue<Mechanic> qu2(3);//There are 3 mechanics
    Mechanic mech1;
    Mechanic mech2;
    Mechanic mech3;

    int line=0;

    mechanic_info(mech1,line);
    mechanic_info(mech2,line);
    mechanic_info(mech3,line);

    qu2.push(mech1);
    qu2.push(mech2);
    qu2.push(mech3);
    return 0;
}