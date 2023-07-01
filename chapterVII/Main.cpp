#include "Add.hpp"
#include "Multiply.hpp"


double binary_op(double left, double right, BinaryFunction *bin_func){
    return (*bin_func)(left, right);
}


int main(int arg, char **argv) {
    double a = 5.0;
    double b = 10.0;

    BinaryFunction* pAdd = new Add();
    BinaryFunction* pMultiply = new Multiply();

    std::cout << "Add: " << binary_op(a, b, pAdd) << std::endl;
    std::cout << "Multiply: " << binary_op(a, b, pMultiply) << std::endl;

    delete pAdd;
    delete pMultiply;

    return 0;
}