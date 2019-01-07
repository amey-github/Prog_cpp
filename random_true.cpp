#include <iostream>
#include <cstdlib> //to use rand(), srand()
#include <ctime> //to use time()

using  namespace std;

int main(void)
{
    //seed rand() : provides input that modifies the algorithm used
    srand(time(0));

    //computer prints 5 random  nos. using an algorithm, and given seed (input)
    //different nos displayed when run multiple times as algorithm changes
    for(int i=0 ; i<5 ; i++)
        cout << rand() << endl;

    cout << endl;

    //prints random nos from 1-6
    for(int i=0 ; i<5 ; i++)
        cout << 1+(rand()%6) << endl;

    return 0;
}

