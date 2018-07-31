#include<iostream>
using namespace std;
void printPersonalDetails(string recipient, int houseNumber, string streetName, string townName, string theRegion)
{	cout << recipient << endl;
	cout << houseNumber ;
	cout << " "<< streetName  << endl;
	cout << townName << endl;
	cout << theRegion << endl;
}

int main(){
	 printPersonalDetails( "John Kwesi Erbynn,", 29, "Post Office Street,", "Cape coast," , "Central Region.");

	return 0;
}
