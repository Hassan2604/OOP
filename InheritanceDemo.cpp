#include<iostream>
using namespace std;
class Parent{
protected:
	int n;
public:
	Parent(){
		n = 0;
	}
	Parent(int p){
		n = p;
	}
	void show(){
		cout << "n=" << n << endl;
	}
};
class Child :public Parent{
private:
	char ch;
public:
	Child() :Parent(){
		ch = 'x';
	}
	Child(char c, int m) : Parent(m){
		ch = c;
	}
	void display(){
		cout << "ch=" << ch << endl;
	}
};
int main(){
	cout << "Faraz Tariq(2223066)\n" << endl;
	cout << endl;
	Child obj1, obj2('#', 100);
	obj1.show();
	obj1.display();
	cout << "\nValues in Object 2 are:\n"<<endl;
	cout << endl;
	obj2.show();
	obj2.display();
}