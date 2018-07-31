#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << " Enter a character : " ;
    cin >> ch;
    cout << endl;

    cout << " ASCII  equivalent is : " <<stable_partition<int>(ch);
    cout << endl;
    return 0;
}
