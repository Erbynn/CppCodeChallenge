#include <iostream>

using namespace std;

int main()
{

    int rray[]={5,10,15,20,20};
int x;
int sum=0;
    for(x=0;x<=5;x++){
        sum=sum+rray[x];

    }
    cout << " sum of element in array equal " << endl;
        cout << sum << endl;
    return 0;
}
