#include "Multiply.hpp"

Multiply::Multiply(){};

Multiply::~Multiply(){};

double Multiply::operator()(double left, double right){
    return left * right;
}
    