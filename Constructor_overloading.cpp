#include<iostream>
using namespace std;
class Over
{
	private:
		int num;
		char ch;
	public:
		Over()
		{
			num=0;
			ch='x';
		}
		Over(int n, char c)
		{
			num=n;
			ch=c;
		}
		void show()
		{
			cout<<"num="<<num<<endl;
			cout<<"ch="<<ch<<endl;
		}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180"<<endl;
	Over first, second (100,'p');
	cout<<"The contents of first:"<<endl;
	first.show();
	cout<<"The contents of second:"<<endl;
	second.show();
}
