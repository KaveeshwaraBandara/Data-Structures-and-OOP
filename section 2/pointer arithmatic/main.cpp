#include <iostream>

using namespace std;

int main(){
    int a[]{1, 2 ,3, 4, 5};
    int *pa = a;
    *pa = 11;
    a[1] = 12;
    pa[2] = 13;
    *(pa + 3) = 14;  //pointer arithmatic

    //a = {11,12,13,14,5}

    for(int i=0; i < 5; i++){
        cout << a[i] << endl;
    }

    printf("************************************************");

    for (int j = 0; j < 5; ++j) {
        *pa++ *=3;
    }

    for(int i=0; i < 5; i++){
        cout << a[i] << endl;
    }

    return 0;
}