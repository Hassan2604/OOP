#include<iostream>
using namespace std;
class Marks
{
	private:
		int a,b,c;
	public:
		void in()
		{
			cout<<"Enter three marks:";
			cin>>a>>b>>c;
		}
	int Sum()
	{
		return a+b+c;
	}
	float avg()
	{
		return (a+b+c)/3.0;
	}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Marks m;
	int s;
	float a;
	m.in();
	s=m.Sum();
	a=m.avg();
	cout<<"Sum="<<s<<endl;
	cout<<"AVerage="<<a;
}
