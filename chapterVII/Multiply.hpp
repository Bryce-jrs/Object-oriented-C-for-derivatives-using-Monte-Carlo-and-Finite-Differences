#ifndef _MULTIPLY_H
#define _MULTIPLY_H

#include "BinaryFunction.hpp"

class Multiply: public BinaryFunction {
    public :
        Multiply();
        virtual double operator()(double left, double right);
        virtual ~Multiply();
};

#endif