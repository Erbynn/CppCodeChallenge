//a program to solve a quadratic equation

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, root1, root2, d;

   cout << " Please enter a, b, and c values " << endl;
   cin >> a >> b >> c;

   d = b*b-4*a*c ;

   if ( d==0){
        root1 = -b / 2*a;
        root2 = root1;
        cout << " THE ROOTS ARE REAL AND EQUAL " << endl;
   }

   else if (d>0){
        root1 = -b + sqrt(d);
        root2 = -b - sqrt(d);
        cout << " ROOTS ARE REAL AND DISTINCT " << endl;
   }

    else {
        root1 = -b / 2*a;
        root2 = sqrt(-d)/2*a;
        cout << " THE ROOTS ARE IMAGINARY " ;
    }

    cout << " \n Root1 = " << root1 << " \n Root2 = " << root2;
    return 0;
}




