#include<iostream>
using namespace std;
class Travel
{
	private:
		int km,hr;
	public:
		Travel()
		{
			km=hr=0;
		}
		void get()
		{
			cout<<"Enter Kilometers travelled:";
			cin>>km;
			cout<<"Enter hours travelled:";
			cin>>hr;
		}
		void show()
		{
			cout<<"You travelled "<<km<<"in"<<hr<<"hours"<<endl;
		}
		void add (Travel p)
		{
			Travel t;
			t.km=km+p.km;
			t.hr=hr+p.hr;
			cout<<"Total travelling is"<<t.km<<"kilometers in"<<t.hr<<"hours."<<endl;
		}
};
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	Travel my,your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
}
