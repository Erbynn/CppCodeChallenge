#include <iostream>
#include <cmath>

using namespace std;
//PS/CSC/15/0053//


int conversion (double ich, double cm)
{
   cout<<endl<<endl;
   cout<<"********** CENTIMETERS - INCHES ********** "<<endl<<endl;
   cout<<"PLEASE ENTER YOUR VALUE IN CENTIMETERS: ";
   cin >>cm;

   ich=cm*0.3937;

    cout<<endl;
    cout<<"THE CONVERSION OF "<< cm <<" in inches is : " <<ich<<endl;


    cm=ich/0.3937;

    cout<<endl<<endl<<endl<<endl;
    cout<<"********** INCHES - CENTIMETERS **********"<<endl<<endl;
    cout<<"PLEASE ENTER VALUE IN INCHES : ";
    cin>>ich;

    cout<<endl<<endl;
    cout<<"THE CONVERSION OF "<<ich<<" in centimetres is : "<<cm<<endl<<endl;

    return cm,ich;
}

int main()
{

   cout<<conversion(2,3);


    return 0;                            }
