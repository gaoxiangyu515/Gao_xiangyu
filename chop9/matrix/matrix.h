#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix
{
    public:
        friend std::ostream &operator<<( std::ostream &, const Matrix & );
        friend std::istream &operator>>( std::istream &, Matrix & );
    private:
        std::string line1_1;
        std::string line1_2;
        std::string line2_1;
        std::string line2_2;
        std::string line3_1;
        std::string line3_2;
        std::string line4_1;
        std::string line4_2;

};

#endif // MATRIX_H
