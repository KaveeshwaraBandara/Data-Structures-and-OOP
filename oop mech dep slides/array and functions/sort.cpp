#include <iostream>

using namespace std;

int main(){
    int num[10] = {0};
    int temp;

    for(int i=0; i<10; i++){
        cout << "Enter number " << i+1 << ": "<<endl;
        cin>>num[i];
    }

    cout<< "Unsorted list" <<endl;
    cout<<"[";
    for (int i = 0; i < 10; ++i) {
        cout<<num[i]<<", ";
    }
    cout<<"]"<<endl;

    for(int j=1; j<10; j++){
        int k=j;
        while(k>0&&num[k-1]>num[k]){
            temp = num[k];
            num[k] = num[k-1];
            num[k-1] = temp;
            k-=1;
        }
    }

    cout<< "Sorted list" <<endl;

    cout<<"[";
    for (int i = 0; i < 10; ++i) {
        cout<<num[i]<<", ";
    }
    cout<<"]";
}