#include<iostream>
using namespace std;
class Move{
protected:
	int position;
public:
	Move(){
		position = 0;
	}
	void forward(){
		position++;
	}
	void show(){
		cout << "Position is: " << position << endl;
	}
};
class Move2 :public Move{
public:
	void back(){
		position--;
	}
};
int main(){
	cout << "Faraz Tariq (2223066)\n" << endl;
	cout << endl;
	Move2 obj;
	obj.show();
	obj.forward();
	obj.show();
	obj.back();
	obj.show();
}