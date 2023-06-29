#ifndef _VANILLA_OPTION_C
#define _VANILLA_OPTION_C

#include "VanillaOption.hpp"
#include <cmath>
#include <iostream>

// initialises the member data 

void VanillaOption::init(){
    K = 100.0;
    r = 0.05;       // 5% interest rate
    T = 1.0;        // One year until maturity
    S = 100.0;      // Option is 'at the money' as spot equals to strike" 
    sigma = 0.2;    // Volatility is 20%
}

// Copies the member data 

void VanillaOption::copy(const VanillaOption& rhs){
    K = rhs.getK();
    r = rhs.getr();
    T = rhs.getT();
    S = rhs.getS();
    sigma = rhs.getsigma();
}

// default constructor

VanillaOption::VanillaOption(){
    init();
}

// parameter constructor

VanillaOption::VanillaOption(const double& _K,const double& _r,const double& _T, const double& _S,const double& _sigma){
    K = _K;
    r = _r;
    T = _T;
    S = _S;
    sigma = _sigma;
}

// copy constructor

VanillaOption::VanillaOption(const VanillaOption& rhs){
    copy(rhs);
}

// Assignement operator 

VanillaOption& VanillaOption::operator=(const VanillaOption& rhs){
    if(this == &rhs) return *this;
    copy(rhs);
    return *this;
}

// Destructor 

VanillaOption::~VanillaOption(){
    // Empty, as the compiler does the work of cleaning up simple types for us 
}

// Public access for the strike price, K

double VanillaOption::getK() const {
    return K;
}

// Public access for the risk-free rate, r

double VanillaOption::getr() const {
    return r;
}


// Public access for the maturity time, T

double VanillaOption::getT() const {
    return T;
}

// Public access for the underlying asset price, S

double VanillaOption::getS() const {
    return S;
}

// Public access for the volatility of underlying asset price, sigma 

double VanillaOption::getsigma () const {
    return sigma;
}

// Calculate the cumulative distribution function (CDF) of the standard normal distribution

double VanillaOption::normalCDF(double val) const{
    return 0.5 * (1 + std::erf(val / std::sqrt(2)));
}


double VanillaOption::calc_call_price() const {
    double sigma_sqrt_T = sigma * sqrt(T);
    double d_1 = (log(S/K) + (r + sigma * sigma * 0.5) * T)/ sigma_sqrt_T;
    double d_2 = d_1 - sigma_sqrt_T;
    return S * normalCDF(d_1) - K * exp(-r*T)*normalCDF(d_2);

}

double VanillaOption::calc_put_price() const {
    double sigma_sqrt_T = sigma * sqrt(T);
    double d_1 = (log(S/K) + (r + sigma * sigma * 0.5) * T)/ sigma_sqrt_T;
    double d_2 = d_1 - sigma_sqrt_T;

    return K * exp(-r*T)*normalCDF(-d_2) - S * normalCDF(-d_1);
}


int main(){
    VanillaOption rsh;

    std::cout << "Call price: " << rsh.calc_call_price() << std::endl;
    std::cout << "Put price: " << rsh.calc_put_price() << std::endl;
}

#endif