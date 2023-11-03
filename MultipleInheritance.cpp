#include <iostream>
using namespace std;

class Parent
{
protected:
    int n;
};

class Child1 : public Parent
{
};

class Child2 : public Parent
{
};

class Baby : public Child1, public Child2
{
public:
    void set()
    {
        Child1::n = 5;
        Child2::n = 10;
    }
};

int main()
{
    Baby obj;
    obj.set();

    // Accessing the n member variable of Child1 and Child2 using the scope resolution operator
    cout << obj.Child1::Parent::n << endl; // accessing n of Child1 from Parent
    cout << obj.Child2::Parent::n << endl; // accessing n of Child2 from Parent

    return 0;
}
