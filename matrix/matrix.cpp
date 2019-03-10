#include <iomanip>
#include "Matrix.h"
using namespace std;

ostream &operator<<( ostream &output, const Matrix &number )
{
    output << number.line1_1
           << "\t" << number.line1_2
           << "\n" << number.line2_1
           << "\t" << number.line2_2
           << "\n" << number.line3_1
           << "\t" << number.line3_2
           << "\n" << number.line4_1
           << "\t" << number.line4_2;
    return output;
}

istream &operator>>( istream &input, Matrix &number )
{
    input >> number.line1_1;
    input >> number.line1_2;
    input >> number.line2_1;
    input >> number.line2_2;
    input >> number.line3_1;
    input >> number.line3_2;
    input >> number.line4_1;
    input >> number.line4_2;


    return input;
}
