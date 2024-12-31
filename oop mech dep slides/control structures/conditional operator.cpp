#include <iostream>

using namespace std;

int main(){
    int x = 3;
    if(x>5){
        cout<<"greater"<<endl;
    } else{
        cout<<"lesser"<<endl;
    }
    int y = (x>5)?1:2;   //alternative method for implement if condition
    cout<< y <<endl;
}