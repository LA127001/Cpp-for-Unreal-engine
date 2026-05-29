#include <bits/stdc++.h>
using namespace std;

void even_odd(int& num){
    if(num % 2 == 0){
        cout << "Even" <<endl;
    }
    else{
        cout << "Odd" <<endl;
    }
}

int main(){
   
    int num = 10;

    even_odd(num);
    
    return 0;
}