//SHASHANK SUROJU
//19CS10061
#include <string>
using namespace std;
#include "BookingClasses.h"

// Names defined as static constants
const string BookingClasses::ACFirstClass::sName = "AC FirstClass";
const string BookingClasses::ExecutiveChairCar::sName = "Executive Chair Car";
const string BookingClasses::AC2Tier::sName = "AC 2Tier";
const string BookingClasses::FirstClass::sName = "First Class";
const string BookingClasses::AC3Tier::sName = "AC 3Tier";
const string BookingClasses::ACChairCar::sName = "AC Chair Car";
const string BookingClasses::Sleeper::sName = "Sleeper";
const string BookingClasses::SecondSitting::sName = "Second Sitting";

//IsAC defined as static constants
const bool BookingClasses::ACFirstClass::sIsAC = true;
const bool BookingClasses::ExecutiveChairCar::sIsAC = true;
const bool BookingClasses::AC2Tier::sIsAC = true;
const bool BookingClasses::FirstClass::sIsAC = false;
const bool BookingClasses::AC3Tier::sIsAC = true;
const bool BookingClasses::ACChairCar::sIsAC = true;
const bool BookingClasses::Sleeper::sIsAC = false;
const bool BookingClasses::SecondSitting::sIsAC = false;

//IsSeating defined as static constants
const bool BookingClasses::ACFirstClass::sIsSeating = false;
const bool BookingClasses::ExecutiveChairCar::sIsSeating = true;
const bool BookingClasses::AC2Tier::sIsSeating = false;
const bool BookingClasses::FirstClass::sIsSeating = false;
const bool BookingClasses::AC3Tier::sIsSeating = false;
const bool BookingClasses::ACChairCar::sIsSeating = true;
const bool BookingClasses::Sleeper::sIsSeating = false;
const bool BookingClasses::SecondSitting::sIsSeating = true;

//Number of Tiers defined as static constants
const unsigned BookingClasses::ACFirstClass::sNumberOfTiers = 2;
const unsigned BookingClasses::ExecutiveChairCar::sNumberOfTiers = 0;
const unsigned BookingClasses::AC2Tier::sNumberOfTiers = 2;
const unsigned BookingClasses::FirstClass::sNumberOfTiers = 2;
const unsigned BookingClasses::AC3Tier::sNumberOfTiers = 3;
const unsigned BookingClasses::ACChairCar::sNumberOfTiers = 0;
const unsigned BookingClasses::Sleeper::sNumberOfTiers = 3;
const unsigned BookingClasses::SecondSitting::sNumberOfTiers = 0;

//Fare load factor defined as static constants
const float BookingClasses::ACFirstClass::sFareLoadFactor = 6.50;
const float BookingClasses::ExecutiveChairCar::sFareLoadFactor = 5.00;
const float BookingClasses::AC2Tier::sFareLoadFactor = 4.00;
const float BookingClasses::FirstClass::sFareLoadFactor = 3.00;
const float BookingClasses::AC3Tier::sFareLoadFactor = 2.50;
const float BookingClasses::ACChairCar::sFareLoadFactor = 2.00;
const float BookingClasses::Sleeper::sFareLoadFactor = 1.00;
const float BookingClasses::SecondSitting::sFareLoadFactor = 0.60;

//IsLuxury defined as static constants
const bool BookingClasses::ACFirstClass::sIsLuxury = true;
const bool BookingClasses::ExecutiveChairCar::sIsLuxury = true;
const bool BookingClasses::AC2Tier::sIsLuxury = false;
const bool BookingClasses::FirstClass::sIsLuxury = true;
const bool BookingClasses::AC3Tier::sIsLuxury = false;
const bool BookingClasses::ACChairCar::sIsLuxury = false;
const bool BookingClasses::Sleeper::sIsLuxury = false;
const bool BookingClasses::SecondSitting::sIsLuxury = false;

//Reservationcharges defined as static constants
const float BookingClasses::ACFirstClass::sReservationCharge = 60.00;
const float BookingClasses::ExecutiveChairCar::sReservationCharge = 60.00;
const float BookingClasses::AC2Tier::sReservationCharge = 50.00;
const float BookingClasses::FirstClass::sReservationCharge = 50.00;
const float BookingClasses::AC3Tier::sReservationCharge = 40.00;
const float BookingClasses::ACChairCar::sReservationCharge = 40.00;
const float BookingClasses::Sleeper::sReservationCharge = 20.00;
const float BookingClasses::SecondSitting::sReservationCharge = 15.00;

//Minimum Tatkal charges defined as static constants
const float BookingClasses::ACFirstClass::sMinimumTatkalCharges = 400.00;
const float BookingClasses::ExecutiveChairCar::sMinimumTatkalCharges = 400.00;
const float BookingClasses::AC2Tier::sMinimumTatkalCharges = 400.00;
const float BookingClasses::FirstClass::sMinimumTatkalCharges = 400.00;
const float BookingClasses::AC3Tier::sMinimumTatkalCharges = 300.00;
const float BookingClasses::ACChairCar::sMinimumTatkalCharges = 125.00;
const float BookingClasses::Sleeper::sMinimumTatkalCharges = 100.00;
const float BookingClasses::SecondSitting::sMinimumTatkalCharges = 10.00;

//Maximum tatkal charges defined as static constants
const float BookingClasses::ACFirstClass::sMaximumTatkalCharges = 500.00;
const float BookingClasses::ExecutiveChairCar::sMaximumTatkalCharges = 500.00;
const float BookingClasses::AC2Tier::sMaximumTatkalCharges = 500.00;
const float BookingClasses::FirstClass::sMaximumTatkalCharges = 500.00;
const float BookingClasses::AC3Tier::sMaximumTatkalCharges = 400.00;
const float BookingClasses::ACChairCar::sMaximumTatkalCharges = 225.00;
const float BookingClasses::Sleeper::sMaximumTatkalCharges = 200.00;
const float BookingClasses::SecondSitting::sMaximumTatkalCharges = 15.00;

//Minimum distance for tatkal defined as static constants
const float BookingClasses::ACFirstClass::sMinimumDistforTatkal = 500.00;
const float BookingClasses::ExecutiveChairCar::sMinimumDistforTatkal = 250.00;
const float BookingClasses::AC2Tier::sMinimumDistforTatkal = 500.00;
const float BookingClasses::FirstClass::sMinimumDistforTatkal = 500.00;
const float BookingClasses::AC3Tier::sMinimumDistforTatkal = 500.00;
const float BookingClasses::ACChairCar::sMinimumDistforTatkal = 250.00;
const float BookingClasses::Sleeper::sMinimumDistforTatkal = 500.00;
const float BookingClasses::SecondSitting::sMinimumDistforTatkal = 100.00;

//Tatkal charge rate factor defined as static constants
const float BookingClasses::ACFirstClass::sTatkalchargerate = 0.30;
const float BookingClasses::ExecutiveChairCar::sTatkalchargerate = 0.30;
const float BookingClasses::AC2Tier::sTatkalchargerate = 0.30;
const float BookingClasses::FirstClass::sTatkalchargerate = 0.30;
const float BookingClasses::AC3Tier::sTatkalchargerate = 0.30;
const float BookingClasses::ACChairCar::sTatkalchargerate = 0.30;
const float BookingClasses::Sleeper::sTatkalchargerate = 0.30;
const float BookingClasses::SecondSitting::sTatkalchargerate = 0.10;

//Blind Concession Factor defined as static constants
const float BookingClasses::ACFirstClass::sBlindConcessionfactor = 0.5;
const float BookingClasses::ExecutiveChairCar::sBlindConcessionfactor = 0.75;
const float BookingClasses::AC2Tier::sBlindConcessionfactor = 0.50;
const float BookingClasses::FirstClass::sBlindConcessionfactor = 0.75;
const float BookingClasses::AC3Tier::sBlindConcessionfactor = 0.75;
const float BookingClasses::ACChairCar::sBlindConcessionfactor = 0.75;
const float BookingClasses::Sleeper::sBlindConcessionfactor = 0.75;
const float BookingClasses::SecondSitting::sBlindConcessionfactor = 0.75;

//Orthopaedically Handicapped Comcession factor defined as static constants
const float BookingClasses::ACFirstClass::sOrthHandiConcessionFactor = 0.5;
const float BookingClasses::ExecutiveChairCar::sOrthHandiConcessionFactor = 0.75;
const float BookingClasses::AC2Tier::sOrthHandiConcessionFactor = 0.50;
const float BookingClasses::FirstClass::sOrthHandiConcessionFactor = 0.75;
const float BookingClasses::AC3Tier::sOrthHandiConcessionFactor = 0.75;
const float BookingClasses::ACChairCar::sOrthHandiConcessionFactor = 0.75;
const float BookingClasses::Sleeper::sOrthHandiConcessionFactor = 0.75;
const float BookingClasses::SecondSitting::sOrthHandiConcessionFactor = 0.75;

//Cancer Patients Concession factor defined as static constants
const float BookingClasses::ACFirstClass::sCancerPatientsConcessionFactor = 0.5;
const float BookingClasses::ExecutiveChairCar::sCancerPatientsConcessionFactor = 0.75;
const float BookingClasses::AC2Tier::sCancerPatientsConcessionFactor = 0.50;
const float BookingClasses::FirstClass::sCancerPatientsConcessionFactor = 0.75;
const float BookingClasses::AC3Tier::sCancerPatientsConcessionFactor = 1.00;
const float BookingClasses::ACChairCar::sCancerPatientsConcessionFactor = 1.00;
const float BookingClasses::Sleeper::sCancerPatientsConcessionFactor = 1.00;
const float BookingClasses::SecondSitting::sCancerPatientsConcessionFactor = 1.00;

//TB Patients Concession factor defined as static constants
const float BookingClasses::ACFirstClass::sTBPatientsConcessionRate = 0.00;
const float BookingClasses::ExecutiveChairCar::sTBPatientsConcessionRate = 0.00;
const float BookingClasses::AC2Tier::sTBPatientsConcessionRate = 0.00;
const float BookingClasses::FirstClass::sTBPatientsConcessionRate = 0.75;
const float BookingClasses::AC3Tier::sTBPatientsConcessionRate = 0.00;
const float BookingClasses::ACChairCar::sTBPatientsConcessionRate = 0.00;
const float BookingClasses::Sleeper::sTBPatientsConcessionRate = 0.75;
const float BookingClasses::SecondSitting::sTBPatientsConcessionRate = 0.75;

