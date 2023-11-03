/*write a program that overloads the comparison operators == to work with string class.The result of
comparison must be 1 if two stings are of same lenght and 0  otherwise*/
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

    int operator==(String s) {
        if (strlen(s.str) == strlen(str))
            return 1;
        else
            return 0;
    }
};

int main() {
    cout << "Hassan Faisal" << endl;
    cout << "2223180" << endl;
    String s1, s2;
    s1.in();
    s2.in();
    cout << "s1 = ";
    s1.show();
    cout << "s2 = ";
    s2.show();
    if (s1 == s2)
        cout << "Both strings are of equal length.";
    else
        cout << "Both strings are of different lengths.";

    return 0;
}
