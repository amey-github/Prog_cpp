#import <iostream>

using namespace std;

int main()
{
    int X=0;
    float Y=0;
    float charge = 0.5;

    cin >> X;
    cin >> Y;

    if((X % 5 != 0) || (X > Y-0.5))
    {
        X=0;
        charge = 0;
    }

    cout << Y - X - charge << endl;
}

