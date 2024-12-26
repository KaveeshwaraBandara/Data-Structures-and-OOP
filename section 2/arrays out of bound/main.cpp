#include <iostream>

using namespace std;

int main(){
    int arr[]{1,2,3,4};

    for (int i = 0; i < 4; ++i) {
        arr[i] += arr[i+1];  //what happens i = 3 ? actually we have 4 elements in this array but now we try to access pos of i+1 means 4th pos of array it is out of the arry so we can see a error here
        cout << arr[i] << endl;
    }
}