//A PROGRAM TO OBTAIN  VOLTAGE USING A FUNTION WITH VOID AS A RETURN TYPE

#include <iostream>
using namespace std;

void measureVoltage(double theCurrent, double theResistance){

		cout << "\t\t\t A PROGRAM TO CALCULATE VOLTAGE"<<endl;
		cout << "Kindly enter the value of current I : ";
		cin >>theCurrent;
		cout << "Kindly enter the value of  voltage V : ";
		cin >> theResistance;
		cout << "\nPlease the VOLTAGE is determine to be ";

		cout << theCurrent* theResistance;
}

int main()
{
	 measureVoltage(3.6,6);
	 cout << "V"<<endl;
	 cout <<endl;
	 return 0;
}
