#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 0;
    cout << "Enter the number: ";
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num << " X " << i <<" = " << num * i << endl;
    }
    return 0;
}