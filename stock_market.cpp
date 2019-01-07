#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int days =0;
    float rate = 0.01;
    float sum =0, amount = 0;

    cout << "Enter no. of days : ";
    cin >> days;

    cout << "Enter amount  : ";
    cin >> amount;

    sum = amount;

    for(int i=1 ; i<=days ; i++)
        sum = sum + 0.01*sum;

    cout << "\nFinal amount  : " << sum << endl;

    return 0;
}
