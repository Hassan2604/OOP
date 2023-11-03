//Write a program that overloads arithmetic addition operator + for concatenating two string values
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class String {
private:
    char str[50];

public:
    String() {
        str[0] = '\0';
    }

    void in() {
        cout << "Enter string: ";
        cin.getline(str, 50);
    }

    void show() {
        cout << str << endl;
    }

    String operator+(const String& s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

int main() {
    cout << "Hassan Faisal" << endl;
    cout << "2223180" << endl;
    String s1, s2, s3;
    s1.in();
    s2.in();
    cout << "s1 = ";
    s1.show();
    cout << "s2 = ";
    s2.show();
    cout << "s3 = ";
    s3.show();
    cout << "Concatenating s1 and s2 into s3.." << endl;
    s3 = s1 + s2;
    cout << "s3 = ";
    s3.show();
    return 0;

}
