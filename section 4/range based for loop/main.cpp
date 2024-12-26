#include <iostream>
#include <vector>

using namespace std;

int main(){
//    for(for_declaration:expression){
//        loop statement
//    }

    vector<string> myCars = {"BMW", "FIAT", "VW", "AUDI"};

    for (int i = 0; i < myCars.size(); ++i) {
        cout << myCars.at(i) << endl;
    }

    printf("******************************\n");

    for(auto myCarModel :myCars){   //range based for loop
        cout << myCarModel << endl;
    }

    int myCarsYear[] = {2002, 2005, 1989, 2010};

    for(int year : myCarsYear){
        cout << year << endl;
    }
}