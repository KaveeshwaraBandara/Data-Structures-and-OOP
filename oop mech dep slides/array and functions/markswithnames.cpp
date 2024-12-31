#include<iostream>
#include<conio.h>

using namespace std;

enum Grade { A, B, C, D, F};

Grade GetCredit(double );

int main(){
    const int NameLength = 25;
    const int Students = 3;
    double Marks[Students] = {0};
    Grade Result[Students] ; // and array to hold student grades
    char Name[Students][NameLength]; // holds the names of "Students" number of students where each name is "NameLength" characters long
    char GradLabel[Students][1];

    for(int i = 0 ; i <Students ; i++){
        cout<<"Name of student "<<i+1<<": \t";
        cin.getline(Name[i],NameLength);
    }

    for(int i = 0 ; i<Students ; i++){
        do
        {
            cout<<"\nEnter the marks of "<<Name[i]<<": \t";
            cin>>Marks[i];
        }while( (Marks[i] <0 ) || (Marks[i]>100));
    }

    for(int k = 0 ; k< Students ; k++){
        Result[k] = GetCredit(Marks[k]);
        switch (Result[k])
        {
            case A:
                GradLabel[k][0] = 'A';
                break;
            case B:
                GradLabel[k][0] = 'B';
                break;
            case C:
                GradLabel[k][0] = 'C';
                break;
            case D:
                GradLabel[k][0] = 'D';
                break;
            case F:
                GradLabel[k][0] = 'F';
                break;
        }
    }
    cout<<"\n\n\tStudent Results\n\t====================\n"<<"\tName\t\t\tGrade\n";
    for(int i = 0 ; i<Students; i++)
    {
        cout<<"\n\t"<<Name[i]<<"\t\t"<<GradLabel[i][0];
    }
    getch();
}

Grade GetCredit(double mark){
    Grade credit;
    if (mark>=75)
        credit =A;
    if ( (mark>=65) && (mark<75))
        credit =B;
    if ( (mark>=55) && (mark<65))
        credit =C;
    if ( (mark>=45) && (mark<55))
        credit =D;
    if (mark<45)
        credit =F;
    return credit;
}