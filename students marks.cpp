#include<iostream>
using namespace std;
//PS/CSC/15/0056
int main()

 {  int mark, score[90];
	string index;
		for(int b = 0; b < 90; b++){
			if(b <= 9){
			index = "PS/CSC/15/000";
			} else if(b >= 10){
				index = "PS/CSC/15/00";
			}
				cout << "Enter marks for index number: " << index << b << endl;
					cin >> score[b];
		}

		cout << "\nAll marks entered!" << endl;
			cout << "\nEnter your index number to see score: " << index;
				cin >> mark;


			cout << "\nYour scored is" << score[mark] << " in this exam." << endl;

	return(0);
}
