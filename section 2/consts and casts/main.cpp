#include <iostream>

using namespace std;

int main(){
    char c[]{"hello"}; //C can be used as a pointer
    *c = 'H';  //ok, can write thru the pointer
    const char *ptc{c};  //pointer to constant
    cout << ptc << endl;  //ok can read the memory pointed to
    *ptc = 'y';  //cannot write to the memory
    char *const cp{c}; //constant pointer
    *cp = 'y'; //can write thru the pointer
    cp++;  //cannot point to anything else
}