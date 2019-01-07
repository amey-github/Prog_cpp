#include <iostream>
#include <cstdlib> //to use rand()

using  namespace std;

int main(void)
{
    //computer prints 5 random  nos. using an algorithm
    //same nos displayed when run multiple times as algorithm not changed
    for(int i=0 ; i<5 ; i++)
        cout << rand() << endl;

    cout << endl;

    //prints random nos from 1-6
    for(int i=0 ; i<5 ; i++)
        cout << 1+(rand()%6) << endl;

    return 0;
}
