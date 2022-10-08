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
    Queue<Mechanic> qu2(4);

    ifstream myfile;
    myfile.open("mechanics.txt");
    string mytext[18];//18 is the number of lines in mechanics.txt
    int pos=0;

for(int i=0;i<qu2.size();i++){
    Mechanic mech;
    for(int j=pos;i<18;j++){
        getline(myfile,mytext[j]);
    }
    mech.set_Name(mytext[pos]);pos++;
    mech.set_ID(stoi(mytext[pos]));pos++;
    mech.set_counter(stoi(mytext[pos]));pos++;
}

    Customer Nour(123,3,15);
    Nour.set_Name("Nour");
    Nour.set_Age(23);
    Nour.set_ID(900202943);
    Nour.printinfo();
    return 0;
}