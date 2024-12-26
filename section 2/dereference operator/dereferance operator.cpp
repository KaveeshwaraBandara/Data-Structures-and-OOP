#include <iostream>

using namespace std;

int main(){
    int myAge = 0;
    int *myage_address = &myAge;

    printf("value at myage_address : %d\n",*myage_address);
    printf("my age address : %p\n", myage_address);

    *myage_address = 22;
    printf("value at myage_address : %d\n", *myage_address);
    printf("my age address : %p\n", myage_address);

    return 0;
}