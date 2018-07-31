#include <iostream>

using namespace std;

int main()
{
    char input;
    cout << " please enter a variable" << endl;
    cin >> input;

    switch(input)
    {
    case 'B':
        cout << "Beginner" <<endl;
        break;

    case 'I':
        cout << "Intermediate Players" <<endl;
        break;

    case 'A':
        cout << "Advanced Player" <<endl;
        break;

    default:
        cout << "Default" << endl;
    }


    return 0;
}
