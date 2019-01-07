#include <iostream>

using namespace std;

int main()
{
    int x=0, sum =0, n=0;

    while(x<5)
    {
        cout << "Enter num" << x+1 << " : ";
        cin >> n;

        x++;

        sum += n;
    }

    cout << "Sum is : " << sum;

    return 0;
}
