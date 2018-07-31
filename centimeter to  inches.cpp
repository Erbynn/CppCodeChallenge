#include<iostream>
#include<string>
//PS/CSC/15/0022
using namespace std;
double centimeters, inches;
int main () //input function
{
	
	  cout<<"please enter a lenght in inches"<<endl;
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

