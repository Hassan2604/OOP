#include<iostream>
using namespace std;
class circle
{
	private:
		float radius;
	public:
	void get_radius(float r)
	{
		radius=r;
	}
	void area()
	{
		cout<<"\nArea of Circle:"<<3.14*radius*radius;
	}
	void circum()
	{
		cout<<"\nCircumference of circle:"<<3*3.14*radius;
	}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	circle c1;
	float rad;
	cout<<"\nEnter Radius:";
	cin>>rad;
	c1.get_radius(rad);
	c1.area();
	c1.circum();
}
