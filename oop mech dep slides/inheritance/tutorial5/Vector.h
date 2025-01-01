#ifndef OOP_VECTOR_H
#define OOP_VECTOR_H

class Vector {
public:
    void SetVector(double , double , double);
    void ADD(Vector, Vector);
    void SUB(Vector,Vector);
    void PrintVector();

protected:
    double x,y,z;
};

#endif //OOP_VECTOR_H
