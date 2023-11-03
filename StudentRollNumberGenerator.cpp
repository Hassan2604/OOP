#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
	private:
		static int r;
	    int rno,marks;
	    char name[50];
	public:
		Student()
		{
			r++;
			rno=r;
		}
		void in()
		{
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter Marks:"<<endl;
			cin>>marks;
		}
		void show()
		{
			cout<<"Roll no:"<<rno<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Marks:"<<marks<<endl;
		}
};
int Student::r=0;
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Student s1, s2, s3;
	s1.in();
	s2.in();
	s3.in();
	s1.show();
	s2.show();
	s3.show();
}
