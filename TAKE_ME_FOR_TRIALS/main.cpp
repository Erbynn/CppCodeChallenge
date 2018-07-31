//
#include<iostream>
using namespace std;

int biggernumber(int firstnumber,int secondnumber){
	if(firstnumber>secondnumber){
		cout << firstnumber << endl;
	}
	else{
		cout << secondnumber << endl;
	}

}

void printPersonalDetails(int hn){
	cout << "John Kwesi Erbynn," <<endl;
	cout << hn << " New Post Office Street,"<<endl;
	cout << "Cape Coast,"<<endl;
	cout << "Central Religion." <<endl;
}

int main(){
	printPersonalDetails(29);
	biggernumber(5,4);
}


