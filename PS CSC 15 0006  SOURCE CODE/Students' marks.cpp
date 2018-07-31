
// PS /CSC/ 15 / 0006

#include <iostream>

using namespace std;

int main()
{

 int x;
    float marks[90];

    for(int n=0;n<90;n++){
        cout <<"Please kindly enter mark for student with index number " <<n<<endl;
        cin >>marks[n];
        }

        cout <<endl<<endl;
        cout <<"*********STUDENTS' SECTION**********"<<endl<<endl;
        cout <<"Please enter your index number to check your result.\n";
        cin >>x;
        cout <<endl<<"You scored~~ " <<marks[x] <<" ~~in the test. U can do better."<<endl<<endl;

    return 0;
}
