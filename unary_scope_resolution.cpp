#include <iostream>

using namespace std;

int x=20;

//:: unary scope resolution operator
int main(void)
{
    int x = 10;
    cout << x << endl; //by default, takes local variable
    cout << ::x << endl; //takes global variable

    return 0;
}
