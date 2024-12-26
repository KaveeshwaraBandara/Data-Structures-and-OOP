#include <cstdio>

using namespace std;

int main(){
    int original = 100;
    int &original_ref = original;
    printf("original  : %d\n", original);
    printf("referance  : %d\n", original_ref);

    int new_value = 200;
    original_ref = new_value;
    printf("original  : %d\n", original);
    printf("new value  : %d\n", new_value);
    printf("referance  : %d\n",original_ref);
}