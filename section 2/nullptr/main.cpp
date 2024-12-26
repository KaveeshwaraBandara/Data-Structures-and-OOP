#include <iostream>

using namespace std;

int main(){
    int *pi = nullptr;
    int a = 62;
    pi = &a;
    if(nullptr != pi) cout << *pi << endl;
}