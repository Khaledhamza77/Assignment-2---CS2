#include"person.h"

class Mechanic: public Person{
private:
    int counter=0;
    Appointment* bookings;
public:
    Mechanic(int ctr=0){
        counter=ctr;
        bookings = new Appointment[counter];
    }
    void set_counter(int ctr){counter=ctr;}
    int get_counter() const {return counter;}
    virtual void set_Appt(Appointment apntmnt,int index){
        counter++;
        *(bookings+index)=apntmnt;
    }
    virtual Appointment get_Appt(int index) const {return *(bookings+index);}
    virtual void printinfo(){
        cout<<"Mechanic's information:\n";
        cout<<"Name: "<<get_Name()<<"\n";
        cout<<"ID: "<<get_ID()<<"\n";
        cout<<"Age: "<<get_Age()<<"\n";
        cout<<"Appointments for the day:\n";
        for(int i=0;i<counter;i++){
            cout<<get_Appt(i).hours<<":"<<get_Appt(i).mins<<"\n";
        }
    }
    bool isAvailable(Appointment appt){
        for(int i=0;i<counter;i++){
            if(get_Appt(i).hours==appt.hours && get_Appt(i).mins==appt.mins) {return false;break;}
        else return true;
        }
    }
};