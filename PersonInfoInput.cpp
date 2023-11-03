#include<iostream>
#include<string>
using namespace std;
class Person{
protected:
	int id;
	string name, address;
public:
	Person(){
		id = 0;
	}
	void getinfo(){
		cout << "Enter Id: ";
		cin >> id;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Address: ";
		cin >> address;
	}
	void showinfo(){
		cout << "Your information is: " << endl;
		cout << endl;
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Address: " << address << endl;
	}
};
class Student : public Person{
private:
	int rno, marks;
public:
	Student(){
		Person::Person();
		rno = marks = 0;
	}
	void get_edu_info(){
		cout << "Enter Roll No: ";
		cin >> rno;
		cout << "Enter Marks: ";
		cin >> marks;
	}
	void show_edu_info(){
		cout << "Your Eduational Information is:" << endl;
		cout << endl;
		cout << "Roll No: " << rno << endl;
		cout << "Marks: " << marks << endl;
	}
};
int main(){
	cout << "Faraz Tariq(2223066)" << endl;
	cout << endl;
	Student s;
	s.getinfo();
	cout << endl;
	s.get_edu_info();
	cout << endl;
	s.showinfo();
	cout << endl;
	s.show_edu_info();
}