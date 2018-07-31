
#include<iostream>
using namespace std;

int biggernumber(int firstnumber,int secondnumber){

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
	int a;
	int b;
		cout << "please enter two numbers to be compared"<<endl<<endl;
		cout << "enter the first number: ";
		cin >> a ;
		cout << "enter the second  number: ";
		cin >> b;
        cout << endl;

	biggernumber(a,b);

}


