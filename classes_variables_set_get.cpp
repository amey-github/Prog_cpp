#include <iostream>

using namespace std;

class Emp
{
    //we can specify our variables as public too
    //but that makes our programs easy to mess

    //so we specify as "private"
    //and use setters and getters (functions) to modify variables

    private:
        string str;

    public:

        //to "assign "val to str
        void set_str(string x)
        {
            str = x;
        }

        //to "access" val of str
        string get_str()
        {
            return str;
        }
};

int main()
{
    Emp obj;
    obj.set_str("Amey");
    string name = obj.get_str();

    cout << name << endl;

    return 0;
}
