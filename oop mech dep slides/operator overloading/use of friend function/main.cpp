#include <iostream>
using namespace std;

class vector{
private:
    double x,y,z;
public :
    vector (double, double, double);
    vector();
    void show();
    friend vector operator+(vector, vector);
} ;

vector :: vector (double p, double q, double r){
    x=p;y=q;z=r;
}

vector:: vector(){
    x=y=z=0;
}

int main(){
    vector a(2,2,3);
    vector b(2,3.5,6);
    vector c;
    c=a+b;
    c.show();
}

void vector ::show()
{
    cout<<endl<<x<<"\t"<<y<<"\t"<<z<<endl;
}

vector operator+(vector l , vector m){
    vector sum;
    sum.x = l.x + m.x;
    sum.y = l.y + m.y;
    sum.z = l.z + m.z;
    return sum;
}