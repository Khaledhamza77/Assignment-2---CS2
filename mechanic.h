#include"person.h"

class Mechanic: public Person{
private:
    int counter=0;
    Appointment* bookings;
public:
    Mechanic(int ctr=0);
    void set_counter(int ctr);
    int get_counter() const;
    void set_Appt(Appointment apntmnt,int index);
    Appointment get_Appt(int index) const;
    void printinfo();
    bool isAvailable(Appointment appt);
};