//Write a program that overloads postfix increment operator to work with user-defined objects.
#include<iostream>
using namespace std;
class Count
{
private:
    int n;
public:
    Count()
    {
        n = 0;
    }
    void show()
    {
        cout << "n = " << n << endl;
    }
    Count operator ++()
    {
        Count temp;
        n = n + 1;
        temp.n = n;
        return temp;
    }
    Count operator ++(int)
    {
        Count temp;
        n = n + 1;
        temp.n = n;
        return temp;
    }
};
int main()
{
    cout << "Hassan Faisal" << endl;
    cout << "2223180" << endl;
    Count x;
    x.show();
    ++x;
    x++;
    x.show();
}
