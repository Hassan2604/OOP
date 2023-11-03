#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
	public:
		Number()
		{
			x=y=100;
		}
		void avg()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"Average="<<(x+y)/2<<endl;
		}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Number n;
	n.avg();
}
