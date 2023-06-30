#ifndef _PAYOFFCALL_H
#define _PAYOFFCALL_H

#include "PayOff.hpp"

class PayOffPut: public PayOff{
    private :
        double K; // strike price

    public : 
        PayOffPut(const double _K);  // No default constructor
        virtual ~PayOffPut(); // Destructor virtual for further inheritance

        // Virtual functions is now overridden (not pure virtual anymore)
        virtual double operator()(const double S) const;
};




#endif