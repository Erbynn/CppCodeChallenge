#include<iostream>
#include<string>
//PS/CSC/15/0056
//ADOMAKO STEPHEN
using namespace std;
double centimeters, inches;
int main () // function for the input
{
	
	  cout<<"please enter the dimesion  in inches"<<endl;
	  double inches;
    cin>>inches;
    
    double result;
    result = 2.54 * inches;
    cout<<inches<<"inches = "<<result<<"cm \n";
	
	cout<<"____________________________________________ \n\n";
 	 cout<<"please enter a lenght in centimeters"<<endl;
	  double cm;
    cin>>cm;
    
   // double result;
    result =   cm / 2.54;
    cout<<cm<<"centimeters = "<<result<<"inches \n";
	
	return(0);
}

