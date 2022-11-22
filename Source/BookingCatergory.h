#ifndef __BOOKINGCATEGORY_H
#define __BOOKINGCATEGORY_H
#include "BookingClasses.h"
#include "Passenger.h"
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

class BookingCategory{
    protected:
        BookingCategory(){}
        virtual ~BookingCategory(){}
    public:
        friend ostream& operator<<(ostream &os, const BookingCategory &s);
        virtual float CalculateFare(float loadedFare, const BookingClasses &bookingClass, const Passenger &passenger, unsigned distance) const = 0;
        virtual bool IsEligible(const Passenger &passenger, const Date &dateOfBooking, const Date &dateOfReservation) const = 0;
        
};



class Concession : public BookingCategory{
    protected:
        Concession(): BookingCategory(){}
        ~Concession(){}
};

class Ladies : public Concession{
    static const float sConcessionFactor;
    public:
        Ladies(){}
        ~Ladies(){}
        static const BookingCategory& Type(){   //singleton of General category that represents type General
            static const Ladies theObj;
            return theObj;
        }
        float CalculateFare(float loadedFare, const BookingClasses &bookingClass, const Passenger &passenger, unsigned distance) const;
        bool IsEligible(const Passenger &passenger, const Date &dateOfBooking, const Date &dateOfReservation) const ;
        //BookingClassesTypes<T> Type();
};

class SeniorCitizen : public Concession{
    static const float sConcessionFactor;
    public:
        SeniorCitizen(){}
        ~SeniorCitizen(){}
        static const BookingCategory& Type(){   //singleton of General category that represents type General
            static const SeniorCitizen theObj;
            return theObj;
        }
        float CalculateFare(float loadedFare, const BookingClasses &bookingClass, const Passenger &passenger, unsigned distance) const;
        bool IsEligible(const Passenger &passenger, const Date &dateOfBooking, const Date &dateOfReservation) const ;
        //BookingClassesTypes<T> Type();
};


class General : public BookingCategory{
    General(){};
    static const string sName; //Name for the general category
    public:
        static const BookingCategory& Type(){   //singleton of General category that represents type General
            static const General theObj;
            return theObj;
        }
        float CalculateFare(float loadedFare, const BookingClasses &bookingClass, const Passenger &passenger, unsigned distance) const;
        bool IsEligible(const Passenger &passenger, const Date &dateOfBooking, const Date &dateOfReservation) const;
};


class Priority : public BookingCategory{
    protected:
        Priority(): BookingCategory(){}
        ~Priority(){}
};

class PremiumTatkal : public Priority{
    PremiumTatkal() : Priority(){}
    public:
        ~PremiumTatkal(){}
        float CalculateFare(float loadedFare, const BookingClasses &bookingClass, const Passenger &passenger, unsigned distance) const;
        bool IsEligible(const Passenger &passenger, const Date &dateOfBooking, const Date &dateOfReservation) const;

};

class Tatkal : public Priority{
    Tatkal() : Priority(){}
    public:
        ~Tatkal(){}
        float CalculateFare(float loadedFare, const BookingClasses &bookingClass, const Passenger &passenger, unsigned distance) const;
        bool IsEligible(const Passenger &passenger, const Date &dateOfBooking, const Date &dateOfReservation) const;
};

#endif

