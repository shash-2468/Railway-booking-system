//SHASHANK SUROJU
//19CS10061
#ifndef __BOOKING_H
#define __BOOKING_H
#include "Station.h"
#include "Date.h"
#include "Passenger.h"
#include "BookingClasses.h"
#include "BookingCatergory.h"
#include <iostream>
using namespace std;
class Booking{
    unsigned PNR;
    Station fromStation_;
    Station toStation_;
    Date dateofBooking_;
    Date dateofReservation_;
    public:
        friend ostream& operator<< (ostream& os, const Booking &f);
        Booking(Station from, Station to, Date d, const BookingClasses &bclass, const Passenger *p = NULL);
        ~Booking(){}

};
#endif