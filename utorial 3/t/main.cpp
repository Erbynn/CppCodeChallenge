#include <iostream>

using namespace std;

int subtraction ( int a, int b){

        int r;
        r=a-b;
        return r;
}
int main()
{
    int e;
    int x=10;
    int y=5;
    int z;
    e=subtraction(7,2);

    cout << "the first result is " << subtraction(7,2) <<endl;
    cout << "the first result is " << e <<endl;
    cout << "the third result is " << subtraction(x,y)<<endl;
    z = 2+subtraction(x,y);


    return 0;
}
