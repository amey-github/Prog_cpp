#include <iostream>

using namespace std;

class Emp
{
    public :
        void name()
        {
            string str;
            cout << "Enter name : " ;
            cin >> str;

            cout << "Hello " << str << endl;
        }

    private :
        void secrets()
        {
            string sec;
            cout << "Enter a secret : ";
            cin >> sec;

            cout << endl << sec << endl;
        }
};

//calling function, creating object
int main()
{
    Emp obj;
    obj.name();

    //Gives error because private :
    //obj.secrets();

    return 0;
}
