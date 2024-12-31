#include<iostream>
#include<conio.h>
using namespace std;

void TestCall();

int main()
{
    TestCall();
    TestCall();
    TestCall();
    TestCall();
    TestCall();
    TestCall();
    return 0;
}
void TestCall() {
    static int a; //this line is executed only at the first call to function
    if (a == 0) {
        cout << "Called for the first time\n";
    }
    if (a == 1) {
        cout << "Called for the second time\n";
    }
    if (a == 2) {
        cout << "Called for the third time\n";
    }
    if (a > 2) {
        cout << "Called more than three time\n";
    }
    a++;
}