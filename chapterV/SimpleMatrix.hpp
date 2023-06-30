#ifndef _SIMPLE_MATRIX_H
#define _SIMPLE_MATRIX_H

#include <vector> 

template <typename Type = double> class SimpleMatrix{
    
    private:
        vector<vector<Type> > mat; // vector of vectors

    public:
        SimpleMatrix(); // Default constructor

        // Constructor specifying rows, columns and a default value
        SimpleMatrix(const int& rows, const int& columns, const Type& val);

        // Copy constructor
        SimpleMatrix(const SimpleMatrix<Type>& _rhs);

        // Assignment operator
        SimpleMatrix<Type>& operator=(const SimpleMatrix<Type>& _rhs);

        virtual ~SimpleMatrix(); // Destructor

        // Access to the matrix values via rows and columns

        vector<vector<Type>> get_mat() const;

        Type& value(const int& row, const int& column) const;
};

#endif