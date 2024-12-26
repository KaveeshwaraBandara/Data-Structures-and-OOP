#include <iostream>

using namespace std;

struct car{
    char name[256];
};

void print_name(car *cars, size_t n_cars){
    for (size_t i = 0; i < n_cars; ++i) {
        printf("%s car \n", cars[i].name);
    }
}

int main(){
//    int myArray[]{3, 6, 9};
//    int *array_ptr = myArray; //this will point to the first value in the array
//    printf("%d",*array_ptr);

    car myGarage[] = {"BMW", "Mercedes", "Ford"};
    print_name(myGarage, sizeof(myGarage) / sizeof(car));

    return 0;
}