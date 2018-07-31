#include <iostream>

using namespace std;

double measureVoltage(double theCurrent, double theResistance){


		return theCurrent* theResistance;
}

int main()
{
	 cout << measureVoltage(37,6);
	 cout << "V"<<endl;
	 cout <<endl;
}
