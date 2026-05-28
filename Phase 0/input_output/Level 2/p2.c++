#include <iostream>
#include <string>
using namespace std;

int main()
{

    int age;
    string name;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Player name is: " << name << endl;
    cout << "Player age is: " << age << endl;

    return 0;
}