#include <iostream>
using namespace std;

int *RetArray();

int main(){
    int *pAry;
    pAry = RetArray();

    for(int i = 0 ; i<5 ; i++)
    {
        cout<<"\n Element "<<i+1<<" "<<*(pAry +i);
    }
}

int *RetArray(){
    static int ar[5];

    for(int i = 0 ; i<5 ; i++)
    {
        ar[i]= i+1;
    }

    return ar;
}