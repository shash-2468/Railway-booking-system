//SHASHANK SUROJU
//19CS10061
#ifndef __EXCEPTION_H
#define __EXCEPTION_H
// ***** Exception class definitions for the project
// ***** Author: P P Das
// ***** Date: 01-Mar-2021
// ***** Version: 1.0
// ***** Known bugs: None
// ***** C++ Standard Library Headers
#include <iostream>
#include <string>
#include <exception>
using namespace std;
// My exception class
class Exception : public exception {
    string message_;
    public:
        Exception(const string& msg) : message_(msg) { }
        const char* what() {

            return message_.c_str();
        }
};

class Bad_Date : public Exception {
    public:
        Bad_Date(const string& msg) : Exception(msg) { }
};

class Bad_Railways : public Exception {
    public:
        Bad_Railways(const string& msg) : Exception(msg) { }
};

class Bad_Railways : public Exception {
    public:
        Bad_Railways(const string& msg) : Exception(msg) { }
};

class Bad_Railways : public Exception {
    public:
        Bad_Railways(const string& msg) : Exception(msg) { }
};
#endif // __EXCEPTION_H
