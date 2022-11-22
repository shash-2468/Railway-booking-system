//SHASHANK SUROJU
//19CS10061
#ifndef __BOOKINGCLASSES_H
#define __BOOKINGCLASSES_H
#include <iostream>
#include <string>
#include "Station.h"
#include "Date.h"
using namespace std;

template <class T>
class BookingClassesTypes;

class BookingClasses{
    struct acchaircar{};
    struct secondsitting{};
    struct ac1class{};
    struct ac2tier{};
    struct fclass{};
    struct ac3tier{};
    struct sleeper{};
    struct exchaircar{};
    protected:
        BookingClasses();
        virtual ~BookingClasses() = 0;
    public:
        //functions here
        friend ostream& operator<<(ostream &os, const BookingClasses &s);
        float GetFareLoadFactor();
        float GetReservationCharge(); 
        bool IsSeating(); 
        bool IsAC();
        unsigned GetNumberOfTiers(); 
        bool IsLuxury();
        float GetMinimumTatkalCharges(); 
        float GetMaximumTatkalCharges();
        unsigned GetMinimumDistanceForTatkalCharge();
        float GetTatkalChargeRate();
        float GetBlindConcessionFactor();
        float GetOrthopaedicallyHandicappedConcessionFactor();
        float GetCancerPatientsConcessionFactor();
        float GetTBPatientsConcessionFactor();
        

        typedef BookingClassesTypes<acchaircar> ACChairCar;
        typedef BookingClassesTypes<secondsitting> SecondSitting;
        typedef BookingClassesTypes<ac1class> ACFirstClass;
        typedef BookingClassesTypes<ac2tier> AC2Tier;
        typedef BookingClassesTypes<fclass> FirstClass;
        typedef BookingClassesTypes<ac3tier> AC3Tier;
        typedef BookingClassesTypes<sleeper> Sleeper;
        typedef BookingClassesTypes<exchaircar> ExecutiveChairCar;

};

template <class T>
class BookingClassesTypes : public BookingClasses{
    static const string sName;                      //Name for respective bookingclass
    static const bool sIsAC;                        //bool for AC
    static const bool sIsSeating;                   //
    static const unsigned sNumberOfTiers;
    static const float sFareLoadFactor;
    static const bool sIsLuxury;
    static const float sReservationCharge;
    static const float sMinimumTatkalCharges;
    static const float sMaximumTatkalCharges;
    static const float sMinimumDistforTatkal;
    static const float sTatkalchargerate;
    static const float sBlindConcessionfactor;
    static const float sOrthHandiConcessionFactor;
    static const float sCancerPatientsConcessionFactor;
    static const float sTBPatientsConcessionRate;

    public:
        // Singleton object - placeholder for the respective type
        static const BookingClassesTypes<T> &Type() {
            static const BookingClassesTypes<T> theObject;
            return theObject;
        }
};



#endif //__BOOKINGCLASSES_H