#ifndef _PAYOFFCALL_H
#define _PAYOFFCALL_H

#include "PayOff.hpp"

class PayOffCall: public PayOff{
    private :
        double K; // strike price

    public : 
        PayOffCall(const double _K){}  // No default constructor
        virtual ~PayOffCall() {} // Destructor virtual for further inheritance

        // Virtual functions is now overridden (not pure virtual anymore)
        virtual double operator()(const double S) const;
};




#endif