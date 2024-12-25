#include <iostream>

union Variant{
    char myString[10];
    int myInteger;
    double myDouble;
};

int main(){
    Variant v;
    v.myInteger = 32;
    printf("my union integer : %d\n", v.myInteger);
    printf("my union integer 2 before mydouble : %d\n",v.myInteger);
    v.myDouble = 3.95448;
    printf("my union double : %f\n", v.myDouble);
    printf("my union integer 2 : %d\n",v.myInteger);
}