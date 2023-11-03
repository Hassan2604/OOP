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
		cout << "Reading input..." << endl;
		get_input("days", days);
		get_input("pages", pages);
	}
	void show()
	{
		cout << "You have read " << pages << " pages in " << days << " days" << endl;
	}
	void operator +=(Read r)
	{
		days += r.days;
		pages += r.pages;
	}
private:
	void get_input(string var_name, int& var)
	{
		cout << "Enter " << var_name << ": ";
		cin >> var;
	}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Read r1, r2;
	cout << "\nReading 1 input..." << endl;
	r1.in();
	cout << "\nReading 2 input..." << endl;
	r2.in();
	cout << "\nReading number 1..." << endl;
	r1.show();
	cout << "\nReading number 2..." << endl;
	r2.show();
	cout << "\nAdding r1 to r2 using += operator..." <<endl;
	r2 += r1;
	cout << "\nTotal reading as follows" << endl;
	r2.show();
}