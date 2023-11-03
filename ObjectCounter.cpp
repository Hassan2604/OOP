#include<iostream>
using namespace std;
class yahoo
{
	private:
		static int n;
	public:
		yahoo()
		{
			n++;
		}
		void show()
		{
			cout<<"You have created"<<n<<"objects created so far."<<endl;
		}
};
int yahoo::n=0;
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
	yahoo x,y;
	x.show();
	yahoo z;
	x.show();
}
