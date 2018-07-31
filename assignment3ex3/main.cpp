#include <iostream>

using namespace std;

int main()
{
	double rainValues[]={76.2, 71.8, 83.6, 64.9, 81.4, 77.3, 75.2, 68.1, 67.1};
	double totalrainValue=0;
	double averagerainValue;

	cout << "Index" << "\t\t" << "ElementValue" <<endl;

		for(int i=0; i<9; i++){
			cout << i << "\t\t" << rainValues[i] << endl;

			totalrainValue = totalrainValue + rainValues[i];
			averagerainValue =  totalrainValue / 9 ;
		}

	cout << endl << "The sum of the rainValues is " << totalrainValue << endl <<endl;
	cout << "The average of the rainValues is " << averagerainValue << endl <<endl;

    return 0;
}
