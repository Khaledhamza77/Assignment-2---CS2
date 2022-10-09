#include<vector>
#include"person.h"

class Mechanic: public Person{
private:
    int counter=0;
    vector<Appointment> bookings;
public:
    Mechanic(int ctr=0){counter=ctr;bookings.resize(counter);}
    void set_counter(int ctr){counter=ctr;bookings.resize(counter);}
    int get_counter() const {return counter;}
    void set_Appt(int hrs, int ms,int index){
        Appointment appt;
        if(hrs<0||hrs>24)
            cout<<"Please enter a number between 0 and 24 inclusive!\n";
        else
            appt.hours=hrs;
        if(ms<0||ms>60)
            cout<<"Please enter a number between 0 and 60 inclusive!\n";
        else
            appt.mins=ms;
        bookings[index]=appt;
    }
    Appointment get_Appt(int index) const {return bookings[index];}
    void printinfo(){
        cout<<"Mechanic's information:\n";
        cout<<"Name: "<<this->get_Name()<<"\n";
        cout<<"ID: "<<this->get_ID()<<"\n";
        cout<<"Age: "<<this->get_Age()<<"\n";
        cout<<"Appointments for the day:\n";
        for(int i=0;i<counter;i++){
            cout<<bookings[i].hours<<":"<<bookings[i].mins<<"\n";
        }
    }
    bool isAvailable(Appointment appt){
        for(int i=0;i<counter;i++){
            if(get_Appt(i).hours==appt.hours && get_Appt(i).mins==appt.mins) {return false;break;}
            else return true;
        }
    }
};