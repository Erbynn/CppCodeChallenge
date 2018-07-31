
#include<iostream>
using namespace std;

int a; int b;

void  biggernumber(int firstnumber,int secondnumber){



		cout << "please enter two numbers to be compared"<<endl<<endl;
		cout << "enter the first number: ";
		cin >> a ;
		cout << "enter the second  number: ";
		cin >> b;
        cout << endl;


	if(firstnumber>secondnumber){
		cout << "The bigger number is : " <<firstnumber <<  endl;
	}

	else if(secondnumber>firstnumber){
		cout << secondnumber << " is bigger than "<<firstnumber<< endl;
	}
	else{
		cout << "The numbers are the same" << endl;
	}

}

int main(){

	biggernumber(a,b);

}


