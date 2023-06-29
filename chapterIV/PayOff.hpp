#ifndef _PAYOFF_H
#define _PAYOFF_H

#include <algorithm>

class PayOff{
    public : 
        PayOff(){};             // Default constructor (no parameters)
        virtual ~PayOff(){};    // Virtual destructor

        // Overloaded operator(), turns the PayOff into an abstract function object 

        virtual double operator()(const double val) const = 0;  // pure virtual method 


};
#endif