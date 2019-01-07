/*this file contains the code for myClass, written seperately
 *to ensure that we can share header files with others without giving them access to our code */

#include "myClass.h"
#include <iostream>

using namespace std;

//myClass() fn is a member of class myClass
myClass::myClass()
{
    cout << "In myClass constructor" << endl;
}
