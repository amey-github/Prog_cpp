#include <iostream>
using namespace std;

//assign default vals to formal parameters in prototype ONLY
//NOT in function definition
//"All-or-None policy, either all have default vals or none do, else error
int volume(int l=1, int w=2, int h=3);

int main(void)
{
    cout << volume() << endl;
    cout << volume(5) << endl; //over-rides "int l=1"
    cout << volume(5,6) << endl; //over-rides "int w=2"
    cout << volume(5,6,2) << endl; //over-rides "int h=3"

    return 0;
}

int volume(int l, int w, int h)
{
    return l*w*h;
}
