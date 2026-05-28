#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks = 0;
    cout << "Enter the marks: ";
    cin >> marks;

    if(marks > 40){
        cout << "Student is Pass";
    }
    else {
        cout << "Student is Fail";
    }
    return 0;
}