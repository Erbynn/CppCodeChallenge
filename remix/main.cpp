#include <iostream>
using namespace std;

void pon(int anynumber){



	cout << " please enter a value " << endl;
	cin >> anynumber;

	if(anynumber>=0){
		cout << "positive value" << endl;
	}
	else{
		cout << "negative value" << endl;
	}
}

int main(){
	int anynumber;
	pon(6);
	}
