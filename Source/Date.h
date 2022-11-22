//SHASHANK SUROJU
//19CS10061
#ifndef __DATE_H
#define __DATE_H
#include <iostream>
using namespace std;
class Date{
    static const char monthNames[][4];
    static const char dayNames[][10];
    enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
    enum Day { Mon, Tue, Wed, Thr, Fri, Sat, Sun };
    typedef unsigned int UINT;
    UINT date_; Month month_; UINT year_;
    public:
        Date(UINT d, UINT m, UINT y) ;
        ~Date();
        Date(const Date& other);
        friend ostream& operator<<(ostream& os, const Date& s);
        bool operator-(const Date & d);
};


#endif