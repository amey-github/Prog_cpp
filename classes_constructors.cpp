#include <iostream>

using namespace std;

class Emp
{
    private:
        string str;

    public:

        //constructor gets called automatically on object creation
        Emp(string x)
        {
            cout << "object created, called automatically" << endl;
            set_str(x);
        }

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
    //parameters of obj given during declaration itself
    Emp obj1("Amey");
    cout << obj1.get_str() << endl;

    cout << endl;

    Emp obj2("Shitole");
    cout << obj2.get_str() << endl;

    return 0;
}
