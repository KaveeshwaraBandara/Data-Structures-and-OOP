#include <iostream>
using namespace std;

int main(){
    int r, c, **pAry;
    cout<<"\nEnter the number of row :\t";
    cin>>r;
    cout<<"\nEnter the number of columns :\t";
    cin>>c;
    pAry = new int*[r];
    for(int i = 0 ; i < r ; i++)
    {
        pAry[i] = new int[c];
        for(int k = 0 ; k < c ; k++)
        {
            cout<<"Enter the value of row "<<i<<" column "<<k<<" : \t";
            cin>>pAry[i][k];
        }
    }
    for(int i = 0 ; i<r ; i++)
    {
        for(int k = 0 ; k<c ; k++)
        {
            cout<<pAry[i][k]<<"\t";
        }
        cout<<endl;
    }
    for(int k =0 ; k <r ; k++)
    {
        delete [] pAry[k];
    }
    delete [] pAry;
}