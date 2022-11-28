#ifndef CUSTOMEXCEPTION_HPP
#define CUSTOMEXCEPTION_HPP

#include <iostream>

class customException : public std::exception {

private :
    const char* msg_;

public :
    customException(const char* msg) : msg_(msg) {}
    const char* what() const throw() {
        return msg_;
    }
}; 

#endif