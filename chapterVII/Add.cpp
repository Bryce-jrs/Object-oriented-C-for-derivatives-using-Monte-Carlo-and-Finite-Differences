#include "Add.hpp"

Add::Add(){};

Add::~Add(){};

double Add::operator()(double left, double right){
    return left + right;
}
