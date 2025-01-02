#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int *pPoint;
    pPoint = new int;

    cout<<"\n Enter value : ";
    cin>>*pPoint;
    cout<<"\n The value + 50 = "<<*pPoint +50<<"\n";

    delete pPoint; // NOTE that the pointer pPoint is NOT deleted; it's a local variable inside main function. What is deleted is the memory reserved and pointed by pPoint.

    pPoint = NULL; //Now make sure that pPoint is not pointed anywhere.
    cout<<"\n pPoiont is deleted \n";

    getch();
}
