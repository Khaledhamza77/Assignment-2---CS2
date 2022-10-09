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

void customer_info(Customer& cust, int& line){
    ifstream myfile;
    myfile.open("customers.txt");
    string mytext[20];//20 is the number of lines in customers.txt
    for(int i=0;i<20;i++){
        getline(myfile,mytext[i]);
    }
    cust.set_Name(mytext[line]);line++;
    cust.set_Age(stoi(mytext[line]));line++;
    cust.set_ID(stoi(mytext[line]));line++;
    cust.set_Appt(stoi(mytext[line]),stoi(mytext[line+1]));line=line+2;
    myfile.close();
}

void bubbleSort(Queue<Customer> q, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(q.peek(j)>q.peek(j+1)){
                Customer temp = q.peek(j);
                q.peek(j)=q.peek(j+1);
                q.peek(j+1)=temp;
            }
        }
    }
}

int main(){
    Queue<Customer> qu(4);//There are 4 customers
    Queue<Mechanic> qu2(3);//There are 3 mechanics

    Mechanic mech1;
    Mechanic mech2;
    Mechanic mech3;

    Customer cust1;
    Customer cust2;
    Customer cust3; 
    Customer cust4;

    int line=0;

    mechanic_info(mech1,line);
    mechanic_info(mech2,line);
    mechanic_info(mech3,line);

    line=0;

    customer_info(cust1,line);
    customer_info(cust2,line);
    customer_info(cust3,line);
    customer_info(cust4,line);

    qu.push(cust1);
    qu.push(cust2);
    qu.push(cust3);
    qu.push(cust4);

    qu2.push(mech1);
    qu2.push(mech2);
    qu2.push(mech3);

    int j=0;
    
    for(int i=0;i<qu.size();i++){
        if(qu2.peek(j).isAvailable(qu.peek(i).get_Appt())) qu.peek(i).set_MechID(qu2.peek(j).get_ID());
        else if(qu2.peek(j).isAvailable(qu.peek(i).get_Appt())) qu.peek(i).set_MechID(qu2.peek(j+1).get_ID());
        else if(qu2.peek(j).isAvailable(qu.peek(i).get_Appt())) qu.peek(i).set_MechID(qu2.peek(j).get_ID());
        j++;
    }

    return 0;
}