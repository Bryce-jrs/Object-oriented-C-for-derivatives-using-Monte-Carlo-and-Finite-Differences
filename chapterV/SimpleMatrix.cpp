#ifndef _SIMPLE_MATRIX_C
#define _SIMPLE_MATRIX_C

#include "SimpleMatrix.hpp"


template <typename Type> SimpleMatrix<Type>::SimpleMatrix(){}

template <typename Type> SimpleMatrix<Type>::SimpleMatrix(const int& rows, const int& columns, 
                                                        const Type& val){
    for (int i = 0; i < rows; i++){
        std::vector<Type> col_vec(cols,val);
        mat.push_back(col_vec); // push_back add a element at the queue of the vector 
    }
}

template <typename Type> SimpleMatrix<Type>::SimpleMatrix(const SimpleMatrix<Type>& _rhs){
    mat = _rhs.get_mat();
}

template <typename Type> SimpleMatrix<Type>& SimpleMatrix<Type>::operator=(const SimpleMatrix<Type>& _rhs){
    if(this == &_rhs) return *this;
    mat = _rhs.get_mat();
    return *this;
}

template <typename Type> SimpleMatrix<Type>::~SimpleMatrix(){}

template <typename Type> SimpleMatrix<Type> SimpleMatrix<Type>::get_mat() const{
    return mat;
}

template <typename Type> Type& SimpleMatrix<Type>::value(const int& row, const int& column) const {
    return mat[row][column];
}

#endif