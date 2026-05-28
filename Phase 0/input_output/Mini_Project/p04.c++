#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name, city;
    int age;

    string name2, city2;
    int age2;

    cout << "Enter the Name: ";
    getline(cin, name);

    cout << "Enter the Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the City: ";
    getline(cin, city);

    cout << "_________" << endl;

    cout << "Enter the Name: ";
    getline(cin, name2);

    cout << "Enter the Age: ";
    cin >> age2;
    cin.ignore();
    cout << "Enter the City: ";
    getline(cin, city2);

    cout << "\nUserInfo\n";

    cout << "Name: " << name << " | Age: " << age << " | City: " << city << endl;
    cout << "Name: " << name2 << " | Age: " << age2 << " | City: " << city2 << endl;

    return 0;
}