#include<iostream>
using namespace std;
class Simple{
protected:
	int a, b;
public:
	Simple(){
		a = b = 0;
	}
	void in(){
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
	}
	void values(){
		cout << "Sum = " << a + b << endl;
		cout << "Subtraction = " << a - b << endl;
		cout << "Multiplication = " << a*b << endl;
		cout << "Divison = " << a / b << endl;
	}
};
class Complex : public Simple{
public:
	void values(){
		if (a <= 0 || b <= 0){
			cout << "Invalid Values !" << endl;
		}
		else{
			Simple::values();
		}
	}
};
int main(){
	cout << "Faraz Tariq (2223066)" << endl;
	cout << endl;
	Complex obj;
	obj.in();
	cout << endl;
	obj.values();
}