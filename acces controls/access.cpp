#include <iostream>

struct myDateAndTime{  //Public as default
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

    private:
    int year;
};

int main(){
    myDateAndTime md;
    printf("year : %d\n",md.get_year());
    md.set_year(2023);
    printf("year : %d", md.get_year());
    return 0;
}