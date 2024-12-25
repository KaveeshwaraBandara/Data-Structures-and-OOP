#include <iostream>

struct myDateAndTime{
    void add_year(){
        year++;
    }
    int year;
};

int main(){
    myDateAndTime md;
    md.year = 2022;
    printf("year : %d\n",md.year);
    md.add_year();
    printf("year : %d", md.year);
    return 0;
}