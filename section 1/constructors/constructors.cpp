#include <iostream>

class myDateAndTime{
    int year;

public:
    void add_year(){
        year++;
    }

    myDateAndTime(int year_in){
        if(!set_year(year_in)){
            year = 2019;
        }
    }

    bool set_year(int new_year){
        if (new_year < 2019) return false;
        year = new_year;
        return true;
    }

    int get_year(){
        return year;
    }
};

int main(){
    myDateAndTime clock{2020};

    printf("year : %d",clock.get_year());

    return 0;
}