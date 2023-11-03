#include<iostream>
#include<string.h>
using namespace std;
class TV
{
	public:
		TV(char Brand[], char Mod[], int Price);
		void Change(char Brand[], char Mod[], int Price);
		void Display();
		private:
			char BrandName[20];
			char Model[10];
			int RetailPrice;
};
TV::TV(char Brand[], char Mod[], float Price)
{
	strcpy(BrandName,Brand);
	strcpy(Model,Mod);
	RetailPrice=Price;
}
void TV::Display()
{
	cout<<"BrandName:"<<BrandName<<endl;
	cout<<"Model:"<<Model<<endl;
	cout<<"Price:"<<RetailPrice<<endl;
}
int main()
{
	cout << "Hassan Faisal" << endl;
	cout << "2223180" << endl;
    TV Test("SONY","HDTV",25000);
	cout<<"Displaying the object...."<<endl;
	Test.Display();
	Test.Change("Toshiba","SDTV",22000);
	cout<<"Displaying objext after change..."<<endl;
	Test.Display();
}
