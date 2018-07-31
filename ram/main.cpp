//ARRAYS

#include <iostream>

using namespace std;

void functionforArray ( int typeofArraySelected[], int sizeofAraytype){
        for ( int x=0; x<sizeofAraytype; x++ ) {
            cout << x << "*******" << typeofArraySelected[x] << endl;
        }
}
int main()
{
    int papa[5] = {10,20,30,40,50};
    int kwesi[5]={200,300,400,500,600};

    //CALLINT THE FUNV=CTON
    functionforArray( papa, 5);

    cout << endl << endl;

    functionforArray( kwesi, 5);
}
