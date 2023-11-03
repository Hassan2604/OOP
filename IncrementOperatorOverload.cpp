// Program that overloads increment operator to work with user defined objects
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
        cout << " n = " << n << endl;
    }
    void operator ++()
    {
        n = n + 1;
    }
};
int main()
{
    cout << "Hassan Faisal" << endl;
    cout << "2223180" << endl;
    Count obj;
    obj.show();
    ++obj;
    obj.show();
}