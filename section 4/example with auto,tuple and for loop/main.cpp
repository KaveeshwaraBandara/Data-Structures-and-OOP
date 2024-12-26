#include <iostream>
#include <vector>

using namespace std;

int main(){   //auto gives chance to decide type of the variable to the compiler
    auto a = 3;
    auto b = 42ll;
    auto c = 42ll;
    auto d = 1.0f;
    auto e = 1.0;
    auto f = 'A';
    auto g = true;


    vector<tuple<string , int >> myCars;
    myCars.push_back(make_tuple("BMW 5er- ",2001));
    myCars.push_back(make_tuple("Ford Mustang - ", 1989));

//    for(tuple<string, int> myVehicles: myCars){
//        cout << get<0>(myVehicles) <<" " << get<1>(myVehicles) <<endl;
//    }

    for(auto myVehicles : myCars){
        cout << get<0>(myVehicles) << " " << get <1>(myVehicles)<< endl;
    }
}