#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "now writing data to the file"<<endl;
    outputFile<<"john kwesi erbynn"<<endl;
    outputFile<<"raphael erbynn"<<endl;

    outputFile.close();
    cout << "Done" <<endl;
 return 0;
}
