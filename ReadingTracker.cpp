//Write a program that overloads arithmetic assignment operator to work with user defined objects
#include<iostream>
using namespace std;
class Read
{
private:
	int days, pages;
public:
	Read()
	{
		days = pages = 0;
	}
	void in()
	{
		cout << "How many days have you read?";
		cin >> days;
		cout << "How many pages have you read?";
		cin >> pages;
	}
	void show()
	{
		cout << "You have read" << pages << "Pages in" << days << "Days" << endl;
	}
	void operator +=(Read r)
	{
		days = days + r.days;
		pages = pages + r.pages;
	}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Read r1, r2;
	r1.in();
	r2.in();
	cout << "\Reading number 1..." << endl;
	r1.show();
	cout << "\Reading number 2..." << endl;
	r2.show();
	cout << "\n Adding r1 to r2 using += operatot..." <<endl;
	r2 += r1;
	cout << "\n Total reading as follows" << endl;
	r2.show();
}