#include <bits/stdc++.h>
using namespace std;

int sum (int &num1, int &num2){
    return num1 + num2;
}

int main(){
   
    int num1 = 4, num2 = 11;

    int total = sum(num1, num2);

    cout << total <<endl;
    
    return 0;
}