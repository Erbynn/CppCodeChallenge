#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float Fahrenheit,Celsuis;
			cout << " CELSIUS TO FAHRENHEIT CONVERSION " << endl;

    int i=0;
	while(i<5){
			cout << endl << " Enter temperature in Celsius :  " ;
			cin >> Celsuis;
			i++;

    Fahrenheit = (9.0*Celsuis) / 5.0 + 32;

    cout << " Temperature in Fahrenheit :   " << Fahrenheit<< endl;
}

		cout << " \n\nPROGRAM HAULTS " << endl;

    return 0;
}
