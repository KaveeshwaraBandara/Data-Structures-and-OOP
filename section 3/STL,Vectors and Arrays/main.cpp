#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 4>arr{1, 2, 3, 4};

    for (int i :arr) {
        cout << i << endl;
    }

//    for (int j = 0; j < arr.size(); ++j) {
//        cout << arr[j] << endl;
//    }

    int arr1[]{1, 2, 3, 4};
}