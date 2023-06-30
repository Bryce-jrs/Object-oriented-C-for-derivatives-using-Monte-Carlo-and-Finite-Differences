#ifndef _PAYOFFPUT_C
#define _PAYOFFPUT_C

#include "PayOffPut.hpp"
#include <iostream>

// constructor with single strike parameter

PayOffPut::PayOffPut(const double _K){
    K = _K;
};

// Destructor

PayOffPut::~PayOffPut(){}

// Overridden operator ()

double PayOffPut::operator()(const double S) const{
    return std::max(K-S,0.0); // Standard European call payoff
}


int main(){
    PayOffPut put(50.0);

    double payoff = put(100);

    std::cout << "The payoff of the put option is: " << payoff << " $" << std::endl;
    if(payoff){
        std::cout << "The option will be exercised" << std::endl;
    }else{
        std::cout << "The option will not be exercised" << std::endl;
    }
}

#endif