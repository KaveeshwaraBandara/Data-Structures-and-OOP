#include <iostream>
#include <cmath>
#include "DerivedVector.h"

using namespace std;

double DerivedVector::DotProduct(DerivedVector v1, DerivedVector v2) {
    double dotProd;
    dotProd = v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;

    return dotProd;
}

double DerivedVector::MagVector() {
    double mag;
    mag = sqrt((pow(x,2)+ pow(y,2)+ pow(z,2)));
    return mag;
}