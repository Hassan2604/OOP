#include<iostream>
#include<stdio.h>
using namespace std;
class Book
{
	private:
		int pg,pr;
		char title[50];
	public:
		void get()
		{
			cout<<"Enter title:"<<endl;
			cin.getline(title ,50);
			cout<<"Enter pages:";
			cin>>pg;
			cout<<"Enter price:";
			cin>>pr;
		}
		void show()
		{
			cout<<"Title:"<<title<<endl;
			cout<<"Pages:"<<pg<<endl;
			cout<<"Price"<<pr<<endl;
		}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Book b1;
	b1.get();
	Book b2(b1);
	Book b3=b1;
	cout<<"\nThe detail of b1:"<<endl;
	b1.show();
	cout<<"\nThe detail of b2:"<<endl;
	b2.show();
	cout<<"\nThe detail of b3:"<<endl;
	b3.show();
}
