#include <iostream>

using namespace std;

int main(){
    int *p = new int[2];
    p[0] = 1;
    *(p+1) = 2;

    for (int i = 0; i < 2; ++i) {
        cout << p[i] << endl;
    }
    delete [] p;
}