//SHASHANK SUROJU
//19CS10061
#ifndef __DIVYAANG_H
#define __DIVYAANG_H
#include <iostream>
using namespace std;

template <class T>
class DivyaangTypes;

class Divyaang{
    protected:
        Divyaang(){}
        ~Divyaang(){}
    public:

};

template <class T>
class DivyaangTypes : public Divyaang {
    DivyaangTypes(){}
    ~DivyaangTypes(){}
    const string &Getname();
};

#endif