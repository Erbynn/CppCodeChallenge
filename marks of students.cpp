
#include<iostream>
using namespace std;
//PS/CSC/15/0012
int main()

 {  int mark, score[20];
	string index;
		for(int b = 0; b < 20; b++){
			if(b <= 9){
			index = "PS/CSC/00/0000";
			} else if(b >= 10){
				index = "PS/CSC/00/0000";
			}
				cout << "Enter marks for index number: " << index << b << endl;
					cin >> score[b];
		}

		cout << "\nAll marks entered!" << endl;
			cout << "\nEnter your index number to see score: " << index;
				cin >> mark;


			cout << "\nYou scored " << score[mark] << " marks in this examination." << endl;

	return(0);
}
