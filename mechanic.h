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
    virtual void set_Appt(int hr, int ms){bookings[counter-1].hours=hr;bookings[counter-1].mins=ms;}
    virtual Appointment get_Appt() const {return bookings[counter-1];}
    void set_Appointment(Appointment apntmnt,int index){
        bookings[index]=apntmnt;
    }
    Appointment get_Appointment(int index) const {return bookings[index];}
    virtual void printinfo(){
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
            if(get_Appointment(i).hours==appt.hours && get_Appointment(i).mins==appt.mins) {return false;break;}
        else return true;
        }
    }
};