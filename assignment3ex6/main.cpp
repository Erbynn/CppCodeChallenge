#include <iostream>

using namespace std;

int main()
{
	int myAge=24;
	int yourAge=29;

	int *myAgePtr=&myAge;
	int *yourAgePtr=&yourAge;

	cout << "VALUES OF AGES" <<endl;
	cout << myAge << endl;
	cout << yourAge << endl <<endl;

	cout << "ADDRESSES OF AGES" << endl;
	cout << myAgePtr << endl;
	cout << yourAgePtr << endl <<endl;

	cout << "AGE POINTERS TO PRINT VALUES OF AGES" <<endl;
	cout << *myAgePtr << endl;
	cout << *yourAgePtr << endl<<endl;

    return 0;
}
