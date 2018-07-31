#include <iostream>

using namespace std;

class papa{

public:

    papa(string z){
        name=z;
    }   /*constructors are functions having the
          similar name as the class.*/
    void setname(string x){
        name=x;
        }
     string getname() {
        return name;
        }
private:
    string name;
};

int main()
{       /* 2 steps of declaration
        string found in the first step*/
    papa pa(" this is a constructor");
    cout << pa.getname()<<endl;
    return 0;
}
