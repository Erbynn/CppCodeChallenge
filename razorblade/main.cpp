    /* switch is just like a function
    the default has a no break */
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x ;
    int papa=x;

    switch(papa){

    case 10:
        cout << " i am really getting this " <<endl;
        break;
    case 5:
        cout << " synchronizing my life to God " << endl;
        break;
    case 4:
        cout << " the humble rules " << endl;
        break;
    default:
        cout << " this is the default type " << endl;
            }

}
