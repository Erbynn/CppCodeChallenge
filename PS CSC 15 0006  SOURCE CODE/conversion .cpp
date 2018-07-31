

// PS / CSC / 15 /0006

#include <iostream>


#include <cmath>

using namespace std;


int conversion (double inches, double cm)
{
   cout<<endl<<endl;
   cout<<"********** CENTIMETERS - INCHES ********** "<<endl<<endl;
   cout<<"Please enter your value in centimeters : ";
   cin >>cm;

   inches = cm * 0.3937;

    cout<<endl;
    cout<<"The conversion of "<< cm <<" in inches is : " <<inches<<endl;


    cm=(inches)/0.3937;

    cout<<endl<<endl<<endl<<endl;
    cout<<"********** INCHES - CENTIMETERS **********"<<endl<<endl;
    cout<<"Please enter value in inches : ";
    cin>>inches;

    cout<<endl<<endl;
    cout<<"The conversion of "<<inches<<" in centimetres is : "<<cm<<endl<<endl;

    return cm,inches;
}

int main()
{

   cout<<conversion(2,3);


    return 0;
}
