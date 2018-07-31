#include<iostream>
//PS/CSC/15/0056

using namespace std;
float a,p,r,n,c;
int main( )
{
	cout<<"please enter values of p,r,n,c of an equation "<<endl;
	
	cout<<"p: "<<endl;
	cin>>p;
	cout<<"r: "<<endl;
	cin>>r;
	cout<<"n: "<<endl;
	cin>>n;
	cout<<"c: "<<endl;
	cin>>c;
	float a = p * (n * c / 1+r/c);
    
	if(n*c == 0){
		a = p;
		cout<<"a = "<< a<<endl;
	}else if(1+r/c > 0);
	    a = p * (n * c / 1+r/c);
	  if(1+r/c < 0);
	 	if(n*c == 0){
		a = p;
		cout<<"a = "<< a<<endl;
	    a = p * (n * c / 1+r/c);
             
	  }
       cout<<"the value of a =  "<< a <<endl;
		 cin>>a; 
		 
		 
		 return (0);
}

	

