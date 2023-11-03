//Write a program that overloads a binary addition opeator +
#include<iostream>
using namespace std;
class Add
{
private:
        int a, b;
public :
    Add()
    {
        a = b = 0;

    }
    void in()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Enter b:";
        cin >> b;
    }
    void show()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
    }
    Add operator +(Add p)
    {
        Add temp;
        temp.a = p.a + a;
        temp.b = p.b + b;
        return temp;
    }
};
int main()
{
 cout << "Hassan Faisal" << endl;
    cout << "2223180" << endl;
    Add x, y, z;
    x.in();
    y.in();
    z = x + y;
    x.show();
    y.show();
    z.show();

}
