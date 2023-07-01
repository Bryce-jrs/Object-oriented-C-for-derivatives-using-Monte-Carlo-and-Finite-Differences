#ifndef _ADD_H
#define _ADD_H
#include "BinaryFunction.hpp"

class Add: public BinaryFunction {
    public :
        Add();
        virtual double operator()(double left, double right);
        virtual ~Add();
};

#endif