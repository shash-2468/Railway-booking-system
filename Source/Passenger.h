//SHASHANK SUROJU
//19CS10061
#ifndef __PASSENGER_H
#define __PASSENGER_H
#include "Date.h"
#include "Gender.h"
#include <iostream>
using namespace std;

class Passenger{
    const string name_;
    const Date dateofBirth_;
    const Gender &gender_;
    public:
        ~Passenger();
        friend ostream& operator<<(ostream& os, const Passenger& p);
        
};

#endif