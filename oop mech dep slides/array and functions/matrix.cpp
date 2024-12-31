#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[3][2] = {0,0};
    int B[3][2] ={0,0};
    int sum[3][2] = {0,0};
    int sub[3][2] = {0,0};
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j =0 ; j<2 ; j++)
        {
            cout<<"Enter a value for A["<<i+1<<"]["<<j+1<<"] :\t";
            cin>>A[i][j];
            cout<<"Enter a value for B["<<i+1<<"]["<<j+1<<"] :\t";
            cin>>B[i][j];
        }
    }
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
        }
    }
    cout<<"\n\nMatrix A\n";
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<2 ; j++)
        {
            cout<<"\t"<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nMatrix B\n";
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<2 ; j++)
        {
            cout<<"\t"<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nSum of the two matrices\n";
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<2 ; j++)
        {
            cout<<"\t"<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nSubtraction of two matrices\n";
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<2 ; j++)
        {
            cout<<"\t"<<sub[i][j]<<" ";
        }
        cout<<"\n";
    }
    getch();
}