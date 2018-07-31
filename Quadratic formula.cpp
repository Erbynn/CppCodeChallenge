
// PS / CSC / 15 /0033

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /* A PROGRAM TO SOLVE A QUADRATIC FORMULAR */
    int a,b,c;
    float x1,x2;    // a,b and c are the coefficient of the quadratic equation
                    // x1 and x2 are the two possible solutions

    cout <<"Please enter the 'a' value : ";
    cin >>a;
    cout <<endl<<"Please enter the 'b' value : ";
    cin >>b;
    cout <<endl<<"Please enter the 'c' value : ";
    cin >>c;

    x1=(-b/2*a)+(sqrt(b*b-4*a*c)/2*a);
    x2=(-b/2*a)-(sqrt(b*b-4*a*c)/2*a);
    cout <<endl<<"The solutions for the quadratic equation are : "<<x1<<" and "<<x2 <<endl;

    return 0;



    return 0;
}
