#include <bits/stdc++.h>
using namespace std;

int main(){
    int menuNum = 0;
    cout << "Enter the number to select the option "<< endl << "1-MENU \n" << "2-SERVICE\n" << "3-PLAY\n" << "4-SETTING\n" <<endl;
    cin >> menuNum;
    switch (menuNum)
    {
    case 1:
        cout << "Menu" <<endl;
        break;
    case 2:
        cout << "Service" <<endl;
        break;
    case 3:
        cout << "Play" <<endl;
        break;
    case 4:
        cout << "Setting" <<endl;
        break;
    
    default:
        cout << "Invalid Menu" <<endl;
        break;
    }
    return 0;
}