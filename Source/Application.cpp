#include <iostream>
#include "Booking.h"
#include "BookingClasses.h"
#include "Station.h"
#include "Date.h"
#include <vector>
#include <list>
using namespace std;

void BookingApplication(){
    Booking b1(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), BookingClasses::ACFirstClass::Type());
    Booking b2(Station("Kolkata"), Station("Delhi"), Date(5, 3, 2021), BookingClasses::AC2Tier::Type());
    Booking b3(Station("Mumbai"), Station("Kolkata"), Date(17, 3, 2021), BookingClasses::FirstClass::Type());
    Booking b4(Station("Mumbai"), Station("Delhi"), Date(23, 3, 2021), BookingClasses::AC3Tier::Type());
    Booking b5(Station("Chennai"), Station("Delhi"), Date(25, 4, 2021), BookingClasses::ACChairCar::Type());
    Booking b6(Station("Chennai"), Station("Kolkata"), Date(7, 5, 2021), BookingClasses::Sleeper::Type());
    Booking b7(Station("Mumbai"), Station("Delhi"), Date(19, 5, 2021), BookingClasses::SecondSitting::Type());
    Booking b8(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), BookingClasses::SecondSitting::Type());
    Booking b9(Station("Mumbai"), Station("Chennai"), Date(12, 4, 2020), BookingClasses::ACChairCar::Type());
}

int main() {
    BookingApplication();
    return 0;
}
