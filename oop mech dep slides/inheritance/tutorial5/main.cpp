#include<iostream>
#include<conio.h>
#include"Vector.h"
#include"DerivedVector.h"
using namespace std;
int main(){
    DerivedVector v1,v2, add,sub, dotP ;
    double x,y,z, mag_v1, mag_v2, dot;

    cout<<"\nEnter the value of x of v1 : ";
    cin>>x;
    cout<<"\nEnter the value of y of v1 : ";
    cin>>y;
    cout<<"\nEnter the value of z of v1 : ";
    cin>>z;

    v1.SetVector(x,y,z);

    cout<<"\nEnter the value of x of v2 : ";
    cin>>x;
    cout<<"\nEnter the value of y of v2 : ";
    cin>>y;
    cout<<"\nEnter the value of z of v2 : ";
    cin>>z;

    v2.SetVector(x,y,z);

    add.ADD(v1, v2);
    sub.SUB(v1, v2);

    mag_v1 = v1.MagVector();
    mag_v2 = v2.MagVector();

    dot = dotP.DotProduct(v1,v2);

    cout<<"\n\nVector v1 + v2 : ";
    add.PrintVector();
    cout<<"\n\nVector v1 - v2 : ";
    sub.PrintVector();
    cout<<"\n\nMagnitude of v1 = "<<mag_v1<<endl;
    cout<<"Magnitude of v2 = "<<mag_v2<<endl;
    cout<<"Dot product of v1.v2 = "<<dot<<endl;

    getch();
}