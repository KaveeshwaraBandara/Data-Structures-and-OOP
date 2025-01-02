#include <iostream>
using namespace std;

double Max(double *pAry,int size);

int main(){
    int size;
    double *pArray;

    cout<<"\nEnter number of entries: "<<endl;
    cin>>size;

    pArray = new double [size];

    for (int i = 0; i < size; ++i) {
        cout<<"\nEnter your number "<<i+1<<": "<< endl;
        cin>>*(pArray+i);
    }

//    for (int j = 0; j < size; ++j) {
//        cout<<*(pArray+j)<<endl;
//    }

    double max= Max(pArray,size);

    cout<<"Maximum number is "<< max <<endl;

    delete []pArray;
}

double Max(double *pAry,int size){
    int max = *pAry;
    for (int i = 1; i < size; ++i) {
        if (*(pAry+i)>max){
            max = *(pAry+i);
        }
    }
    return max;
}