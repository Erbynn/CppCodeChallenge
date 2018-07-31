#include <iostream>

using namespace std;

int main()
{
    int max,
    papa=1;

    while (papa > 0 ){
        cin >> papa;
        max = papa;
        papa = papa + 1;
    }

    cout << "maximum int value is: " << max << endl;
    return 0;
}
