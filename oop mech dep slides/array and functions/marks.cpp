#include<iostream>
using namespace std;
int main()
{
    int maths[10] ={0}; // create and implicitly initialize the integer array
    char repeat;
    int max=0, min=0, total=0;
    double avg =0;
    do
    {
        for(int i = 0 ; i<10 ; i++)
        {
            do
            {
                cout<<"\nEnter the marsk of student no "<<i+1<<" : \t";
                cin>>maths[i];
            }while( (maths[i] >100) || (maths[i] <0));
        }
        max = min = maths[0];
        for(int i = 0 ; i<10 ; i++)
        {
            if(max < maths[i])
                max = maths[i];
            if(min> maths[i])
                min = maths[i];
            total+=maths[i];
        }
        avg = static_cast<double> (total)/10;
        cout<<"\n\nMaximum =\t"<<max;
        cout<<"\nMinimum =\t"<<min;
        cout<<"\nAverage =\t"<<avg;
        do
        {
            cout<<"\n\nDo you want to continue (Y/N)?\t";
            cin>>repeat;
            if( (repeat!='Y') && (repeat!='N') && (repeat!='y') && (repeat!='n'))
                cout<<"\n Unrecognized input";
        }while( (repeat!='Y') && (repeat!='N') && (repeat!='y') && (repeat!='n'));
    }while( (repeat =='y') || (repeat == 'Y'));
}
