#include<iostream>
using namespace std;
class Array
{
	private:
		int a[5];
	public:
		void fill();
		void display();
		int max();
		int min();
};
void Array::fill()
{
	for (int i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]:";
		cin>>a[i];
	}
}
void Array::display()
{
	for (int i=0;i<5;i++)
	cout<<"a["<<i<<"]:"<<a[i]<<endl;
}
int Array::max()
{
	int m=a[0];
	for(int i=0;i<5;i++)
	if(m<a[i])
	m=a[i];
	return m;
}
int Array::min()
{
	int m=a[0];
	for(int i=0;i<5;i++)
	if(m>a[i])
	m=a[i];
	return m;
}
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Array arr;
	arr.fill();
	cout<<"You entered following values:"<<endl;
	arr.display();
	cout<<"Maximum Value="<<arr.max()<<endl;
	cout<<"Minimum Value="<<arr.min()<<endl;
}
