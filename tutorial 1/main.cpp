#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
     int seed;
    int z1,z2,z3;

    cout << "..........random numbers,,,,,,,,"<<endl<<endl;
    cout << "to initialize the random number generator, ";
    cout << "\n\nplease enter an integer value: "<<endl;
    cin >>seed;

    srand(seed);
    z1=rand();
    z2=rand();
    z3=rand();

    cout << "\nthree random numbers : ";
    cout << z1 <<" "<<z2<<" "<<z3<<" "<< endl;
    return 0;
}
