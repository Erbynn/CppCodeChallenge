#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a character : " << endl;
    cin >> ch;

    cout << " ASCII  equivalent is : " <<static_cast<int>(ch);
    return 0;
}
