#include <iostream>

using namespace std;



int main()
{
    int x;
    int y;
    cout << "enter your first digit";
    cin >> x;

    cout << "enter your second digit";
    cin >> y;

    int sum(x,y);


    return 0;

}


int sum(int x,int y)
{
    int total;
    total=x+y;
    return total;
}
