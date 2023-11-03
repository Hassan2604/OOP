#include<iostream>
using namespace std;
class Student
{
	private:
		int marks;
		char grade;
	public:
		Student(int m, char g)
		{
			marks=m;
			grade=g;
		}
		void show()
		{
			cout<<"Marks="<<marks<<endl;
			cout<<"Grade="<<grade<<endl;
		}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Student s1(730,'A'), s2(621,'B');
	cout<<"Record of Student 1:"<<endl;
	s1.show();
	cout<<"Record of Student 2:"<<endl;
	s2.show();
}
