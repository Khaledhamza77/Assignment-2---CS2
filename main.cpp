#include<fstream>
#include<iostream>
#include<string>
#include"person.h"
#include"customer.h"
#include"mechanic.h"
#include"queue.h"
using namespace std;

int main(){
    Customer Nour(123,3,15);
    Nour.set_Name("Nour");
    Nour.set_Age(23);
    Nour.set_ID(900202943);
    Nour.printinfo();
    return 0;
}