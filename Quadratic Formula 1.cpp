#include<iostream>
#include<cmath>
using namespace std;
float a,b,c;
float x,y;
int main ()
{
	cout << "Please enter values of a,b,c of a quadratic equation";
	cout << endl;

	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
    cin>> c;

	float dit = b*b-4*a*c;

	if (dit == 0){
		x = -b/2*a;
		cout << "Value for x =" << x << endl;
	}
	else if (dit > 0){
		x = (-b + sqrt(dit))/2*a;
		y = (-b - sqrt(dit))/2*a;
		cout << "Your value for x =" << x << endl;
		cout << "Your value for y =" << y << endl;

	}
	return 0;
}
