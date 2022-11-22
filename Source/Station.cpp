//SHASHANK SUROJU
//19CS10061
#include <iostream>
#include "Station.h"
#include <string>
using namespace std;

//Constructor
Station::Station(const string &name) : name_(name){}

//destructor
Station::~Station(){}

//Get name function
const string Station::GetName() const {
    return name_;
}

//copy ctor
Station::Station(const Station &s) : name_(s.name_){}   

//output stream overloading
ostream& operator<<(ostream& os, const Station& s){
    os << s.name_ << endl;
    return os;
}

//Testing Basic class Functionalities
void Station::UnitTestStation(){
    Station s1("Chennai");
    Station s2(s1);
    if(s1.GetName() != "Chennai"){
        cout << "Station Constructor Error" << endl;
    }
    if(s2.GetName() != "Chennai"){
        cout << "Station Copy Constructor Error" << endl;
    }
}
