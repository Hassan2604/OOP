#include<iostream>
using namespace std;
class Test
{
	private:
		int n;
	public:
		void in()
		{
			cout<<"Enter a number:";
			cin>>n;
		}
	void out()
	{
		cout<<"The Value of n="<<n;
	}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Test obj;
	obj.in();
	obj.out();
}
