//SHASHANK SUROJU
//19CS10061
#ifndef __STATION_H
#define __STATION_H
#include <iostream>
#include <string>
using namespace std;

class Station{
    const string name_;
    public:
        Station(const string& name ); //constructor
        ~Station();                 //Destructor
        const string GetName() const;     //function to get name of station
        Station(const Station &s); //copy constructor
        friend ostream& operator<<(ostream &os, const Station &s); //Output stream overloading
        //int GetDistance(const Station & dest) const;
        static void UnitTestStation(); //Unit testing 
};
#endif
