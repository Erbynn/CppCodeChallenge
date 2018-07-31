#include <iostream>

using namespace std;

int main()
{
   const int arsize = 4;
   int papa[arsize] = {2,4,6,8};

   for (int i=0; i < arsize; i++)
   {
       cout << (papa + i) << " ";
   }
    cout << endl;



   int *ptrpapa = 0;
   ptrpapa = papa;

    for (int i=0; i < arsize; i++)
   {
       cout << &ptrpapa[i] << " ";

   }
   cout << endl;




    for (int i=0; i < arsize; i++)
   {
       cout << *(ptrpapa + i) << " " ;
   }
   cout << endl;



    cout << papa[1] << endl;
    cout << ptrpapa[1] << endl;


    return 0;
}
