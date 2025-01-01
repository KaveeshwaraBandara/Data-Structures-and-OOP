#include <iostream>
#include "Vector.h"

using namespace std;

void Vector::ADD(Vector v1, Vector v2) {
    x = v1.x + v2.x;
    y = v1.y + v2.y;
    z = v1.z + v2.z;
}

void Vector::SUB(Vector v1, Vector v2) {
    x = v1.x - v2.x;
    y = v1.y - v2.y;
    z = v1.z - v2.z;
}

void Vector::PrintVector() {
    cout<<x<<"\t"<<y<<"\t"<<z<<endl;
}

void Vector::SetVector(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}