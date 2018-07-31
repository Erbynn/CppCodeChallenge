#include <iostream>


using namespace std;

int main()
{
    int papa[3][2] = { {5,5}, {1,2}, {6,6} };

    for ( int row=0; row<3; row++){
        for ( int column=0; column<2; column++) {
            cout << papa[row][column] << " ";
        }
    cout << endl; // END EVERY LINE AFTER EACH ROW

    }
}
