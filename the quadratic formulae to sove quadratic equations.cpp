#include<iostream>
//PS/CSC/15/0022
#include<cmath>
using namespace std;
float a,b,c;
float x1,x2;
int main( )
{
	cout<<"please enter values of a,b,c of a quadratic equation:\n";

	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;

	float dit = b*b-4*a*c;

	if(dit == 0){
		x1 = -b/2*a;

		cout<<"x1 = "<< x1<<endl;

	}else if(dit > 0){

		x1 = (-b + sqrt(dit))/2*a;
		x2 = (-b - sqrt(dit))/2*a;

		cout<<"x1 = "<< x1<<endl;
		cout<<"x2 = "<< x2<<endl;

	}else{
		cout<<"Invalide quadratic values. Try again"<<endl;
	}
    cout<<dit;

}












