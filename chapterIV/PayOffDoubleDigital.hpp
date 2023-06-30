#ifndef _PAYOFFDOUBLEDIGITAL_H
#define _PAYOFFDOUBLEDIGITAL_H

#include "PayOff.hpp"

class PayOffDoubleDigital: public PayOff{
    private :   
        double U; // Upper strike price 
        double D; // Lower strike price

    public :
        // two strike parameters
        PayOffDoubleDigital(const double _U, const double _D);
        virtual ~PayOffDoubleDigital();

        // Pay-off is 1 if spot within strike barriers, 0 otherwise
        virtual double operator()(const double S) const;
};


#endif