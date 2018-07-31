#include <iostream>
#include <string>
using namespace std;

class classone{
public:
    void functionname(string x){
        name=x;
    }
    string getword(){
        return name;
        }
private:
    string name;

};

int main()
{
    classone bang;
    bang.functionname("EVERY PUBLIC CLASS NEEDS A PUBLIC** private requires 3 steps to bhe called");
    cout << bang.getword()<<endl;
    return 0;
}
