#include <iostream>

class BinaryFunction{
    public:
        BinaryFunction(){};
        virtual double operator()(double left, double right) = 0;
        virtual ~BinaryFunction(){};        
};