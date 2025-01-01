#ifndef OOP_DERIVEDVECTOR_H
#define OOP_DERIVEDVECTOR_H

#include "Vector.h"

class DerivedVector: public Vector{
public:
    double DotProduct(DerivedVector, DerivedVector);
    double MagVector();
};

#endif //OOP_DERIVEDVECTOR_H
