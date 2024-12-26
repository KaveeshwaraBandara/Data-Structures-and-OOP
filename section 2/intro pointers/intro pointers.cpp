#include <iostream>

int main(){
    printf("%d\n",sizeof(int *)); //this will return 8 in 64 bit machine, returns 4 in 32 bit machine

    int a = 92;
    //int *pi = &a;
    //printf("%d\n",&a);
    std::cout << a << std::endl;

    int *pi{&a}; //this pi pointer point to the location of variable a
    *pi = 600;

    printf("%d",a);
}