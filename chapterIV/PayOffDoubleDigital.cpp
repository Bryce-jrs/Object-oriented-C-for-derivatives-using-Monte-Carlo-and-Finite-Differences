#ifndef _PAYOFFDOUBLEDIGITAL_C
#define _PAYOFFDOUBLEDIGITAL_C

#include "PayOffDoubleDigital.hpp"

// Constructor with two strikes parameters, upper and lower barrier 
PayOffDoubleDigital::PayOffDoubleDigital(const double _U, const double _D){
    U = _U;
    D = _D;
}

double PayOffDoubleDigital::operator()(const double S) const {
    if(S >= D && S <= U){
        return 1.0;
    }else{
        return 0.0;
    }
}

#endif