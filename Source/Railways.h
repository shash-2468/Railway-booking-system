#ifndef __RAILWAYS_H
#define __RAILWAYS_H
#include <iostream>
#include <map>
#include <vector>
using namespace std;

#include "Station.h"
class Railways{
    Railways();
    ~Railways();

    public:
        static map<const string, const Station*> sStations;
        static map<pair<const Station*, const Station*>, int> sDistStations;
        static const Railways& IndianRailways(){
            static const Railways indianrails;
            return indianrails;
        }
        int GetDistance (const Station &from,const Station &to) const;
        const Station *GetStation(const string &)const;
        Railways(const Railways& other);
        static void UnitTestRailways();
        friend ostream& operator<<(ostream& os, const Railways& s);
};

#endif