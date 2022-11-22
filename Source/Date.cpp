//SHASHANK SUROJU
//19CS10061
#include "Date.h"
const char Date::dayNames[][10] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
const char Date::monthNames[][4] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };


Date::Date(UINT d, UINT m, UINT y) : date_(d), month_((Month)m), year_(y){
    //ctor
}

Date::~Date() {
    //dtor
}

Date::Date(const Date& other)
{
    date_ = other.date_;
    month_ = other.month_;
    year_ = other.year_;
    //copy ctor
}



ostream& operator<<(ostream& os, const Date& s) {
    os << s.date_ << "/" << s.monthNames[s.month_ - 1] << "/" << s.year_ << endl;
    return os;
}