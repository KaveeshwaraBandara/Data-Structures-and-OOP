#include<iostream>
#include<conio.h>
#include<iomanip>
#include"Grade.h"
using namespace std;

int main()
{
    const int students = 3;
    char StudentName[students][25];
    float MathMark[students], SciMark[students];
    Grade MarkSheet[students];
    for(int i = 0 ; i< students ; i++)
    {
        cout<<"\nEnter the name of student "<<i+1<<"\t";
        cin.getline(StudentName[i], 25);
        MarkSheet[i].SetName(StudentName[i]);
    }
    cout<<"\nMathematics Marks\n";
    for(int i = 0 ; i <students ; i++)
    {
        cout<<"Mathematics marks of "<<left<<setw(25)<<StudentName[i]<<"\t";
//setw(25) allocate a column of 25 characters.
// ''letf" tells the compiler to left align the content
        do
        {
            cin>>MathMark[i];
            if( (MathMark[i]<0) || (MathMark[i]>100))
                cout<<"\nInvalid mark";
        }while( (MathMark[i]<0) || (MathMark[i]>100));
    }
    cout<<"\nScience Marks\n";
    for(int i = 0 ; i <students ; i++)
    {
        cout<<"Science marks of "<<left<<setw(25)<<StudentName[i]<<"\t";
        do
        {
            cin>>SciMark[i];
            if( (SciMark[i]<0) || (SciMark[i]>100))
                cout<<"\nInvalid mark";
        }while( (SciMark[i]<0) || (SciMark[i]>100));
    }
    for(int i = 0 ; i <students ; i++)
    {
        MarkSheet[i].SetMarks(MathMark[i], SciMark[i]);
    }
    cout<<"\n\nResult Sheet\n";
    cout<<"\nName\t\t Mathematics\t Science\n";

    for(int k = 0 ; k< students ; k++)
    {
        MarkSheet[k].ShowResults();
        cout<<"\n";
    }
    getch();
}