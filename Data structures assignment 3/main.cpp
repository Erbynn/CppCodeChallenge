/*

DATA STRUCTURES ASSIGNMENT 3
PS/CSC/15/0006
ERBYNN, JOHN KWESI

*/

#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci (int);

int  main()
{
        int num;

        cout << endl << "\t ------------- FIBONACCI PROGRAM ---------------" << endl << endl;

 start: cout << " Kindly input the number of terms for Fibonacci Series : " ;
        cin >> num;

        if(num<0)
            {
            cout << " Usage: "<< num << " must be positive. " << endl << endl <<endl;
            goto start;
            }

        else
        {
            cout << endl << endl << " The Fibonnaci Series is given below  " <<endl<<endl;

            for(int i=0; i<num; i++)
            {
                cout << "  " << fibonacci(i) ;
            }
            cout << endl;
        }

    getch();
}

int fibonacci (int n)
{
    if ((n==1) || (n==0))
    {
        return n;
    }

    else
    {
        return (fibonacci(n-2) + fibonacci(n-1));
    }
}


