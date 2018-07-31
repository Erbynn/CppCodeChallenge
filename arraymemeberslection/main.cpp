#include <iostream>
#include "arrow.h"

using namespace std;
//all codes are called here for execution
int main()
{
    arrow arrowobject;
    arrowobject.printsomething();

    arrow *arrowpointer = &arrowobject;
    arrowpointer->printsomething();


}
