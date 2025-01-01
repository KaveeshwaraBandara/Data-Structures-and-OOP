#include<iostream>
#include<string.h>
#include<iomanip> //setw() is defined here
#include"Grade.h" //Note the syntax in calling custom header files. 
using namespace std;
void Grade::SetMarks(float maths, float science)
{
    Mathematics = maths;
    Science = science;
}
void Grade::ShowResults()
{
    GradeMaths = GetGrade(Mathematics);
    GradeScience = GetGrade(Science);
    cout<<left<<setw(25)<<Name<<setw(10)<<GradeMaths;
//set a column of 25 characters to print the name and left align the content
    cout<<setw(10)<<GradeScience;
}
void Grade::SetName(char na[])
{
    strcpy(Name, na);
}
char Grade::GetGrade(float mark)
{
    char grad;
    if( mark >=75)
        grad = 'A';
    if( (mark>=65 ) && (mark < 75))
        grad = 'B';
    if( (mark>=55 ) && (mark < 65))
        grad = 'C';
    if( (mark>=45 ) && (mark < 55))
        grad = 'D';
    if( mark < 45)
        grad = 'F';
    return grad;
}