#include <iostream>

// & - address of operator

using namespace std;

int main(){
    int *myPtr;
    printf("the value of myPtr is %p\n", myPtr);
    //VOID pointers and std::byte pointers

    int num{};
    cout << num << endl;

    int *numAddress{&num};
    cout << numAddress << endl;

    *numAddress = 8;

    cout << num << endl;

    return 0;
}