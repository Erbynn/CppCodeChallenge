#include <iostream>
using namespace std;

int numberraisetopower(int base, int exponent){
	int answer=1;

	for ( int i=0; i < exponent; i++){
	 answer = answer * base;
	}
	return  answer;
}
int main(){
	int base;
	int exponent;
	cout << " please enter base value :  " ;
	cin >> base;
	cout << " please enter exponent value :  " ;
	cin >>exponent;
	cout << endl;

	cout << base << " exponent " << exponent << " is  " ;

	cout << numberraisetopower(base,exponent);
	cout << endl;
}

