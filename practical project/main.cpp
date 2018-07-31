#include <iostream>

using namespace std;

int twoexpthree(int base, int exponent)
{
	int answer=1;
	for (int i=0; i<exponent; i++){
	int ans= answer * base;
	}
	return ans;
}

int main(){
	cout << twoexpthree(3,3);
    return 0;
}
