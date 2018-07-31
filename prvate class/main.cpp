#include <iostream>

using namespace std;

class myclass{
public:
    void setname(string x) {
        name = x;
         }

       /* FIRST, THIS FUNCTION SETS THE SET THE NAME
         IN THE PRIVATE TO A VARIABLE OR WORD */

     string getname() {
        return name;
        }

       /* SECOND, USE ANOTHER FUNCTION TO GET OR RETURN THE NAME YOU SET.
       THE NUMBER TO RETURN IS IN STRING FORM DAT'S Y STRING IS USED FOR THE SECOND FUNCTION*/

private:
    string name;

};
int main()
{
    myclass object;
    object.setname("THIS PRIVATE CLASS SEEMS SIMPLE NOW");
    cout << object.getname() << endl;
    return 0;
}
