#ifndef _PAYOFFCALL_C
#define _PAYOFFCALL_C

#include "PayOffCall.hpp"
#include <iostream>

// constructor with single strike parameter

PayOffCall::PayOffCall(const double _K){
    K = _K;
};

// Destructor

PayOffCall::~PayOffCall(){}

// Overridden operator ()

double PayOffCall::operator()(const double S) const{
    return std::max(S-K,0.0); // Standard European call payoff
}


int main(){
    PayOffCall call(50.0);

    double payoff = call(100);

    std::cout << "The payoff of the call option is: " << payoff << " $" << std::endl;
    if(payoff){
        std::cout << "The option will be exercised" << std::endl;
    }else{
        std::cout << "The option will not be exercised" << std::endl;
    }
}

#endif