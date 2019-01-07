#include <iostream>

using namespace std;
float add(float x, float y);

int main()
{
    float x,y;

    cin >> x;
    cin >> y;

    cout << add(x,y);
    return 0;
}

float add(float x, float y)
{
    float sum = x+y;
    return sum;
}
