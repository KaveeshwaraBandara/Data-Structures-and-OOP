#include<iostream>
#include<conio.h>
using namespace std;

class A{
    protected:
        int a;
    public:
        A();
        void Set_A(int);
        void Show();
};

void A::Show(){
    cout<<"\nShow of A is called a = "<<a<<endl;
}

A::A(){
    cout<<"\nConstructor of A is called\n";
    a = 0;
}

void A::Set_A(int x){
    a = x;
}

class B : public A{
    protected:
        int b;
    public:
        B();
        void Show(); // Override the Show function of class A
        void Set_B(int );
};

B::B(){
    cout<<"\nConstructor of B is called\n";
    b = 0;
}

void B::Set_B(int y){
    b = y;
}

void B::Show(){
    cout<<"\nShow of B is called b = "<<b<<endl;
}

int main(){
    B objB; //Creates an object of class B
    objB.Set_A(25); //Set the variable a of class A
    objB.Set_B(50); //Set the variable b of class B
    objB.Show(); //Overridden Show function is called
    objB.A::Show(); // Show function of the base class is explicitly called
    A objA; //An object of class A is created
    objA.Show(); //Show function of class A is called
    getch();
}
