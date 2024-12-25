#include <iostream>

struct car{
    char make[256];
    int year;
    int wheels;
    bool isRunning;
};

int main(){
    car myBMW;
    myBMW.year = 2001;
    myBMW.isRunning = true;
    printf("my BMW year %d", myBMW.year);
}