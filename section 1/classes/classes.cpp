#include <iostream>

class myDateAndTime{
    int year;

public:
    void add_year(){
        year++;
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
    myDateAndTime clock;
    if(!clock.set_year(2020)){
        clock.set_year(2019);
    }
    clock.add_year();
    printf("year : %d",clock.get_year());
    return 0;
}