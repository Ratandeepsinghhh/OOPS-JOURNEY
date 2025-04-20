/* concept of access specifier
 3 types of access specifier are there public(anywhere in the program) , private(only in the base class) and
 protected(base class and derived classes) */
#include <iostream>
using namespace std;
class Line
{

public: // access specifier public = the data and member function can be accessed anywhere but within  the program
    int length = 10;
    void setlength(int l)
    {
        length = l;
    }
    int getlength()
    {
        cout << length << endl;
    }
};
int main()
{
    Line l1;
    l1.length = 20;
    l1.getlength();

    Line l2;
    l2.setlength(100);
    l2.getlength();
}