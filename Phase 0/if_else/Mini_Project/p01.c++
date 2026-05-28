#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int health;
    cout << "Enter your Health: ";
    cin >> health;

    if(health < 100 && health > 1){
        cout << "Player is alive \n player take the gun" <<endl;
    }
    else{
         cout << "Player is dead" <<endl;
    }
    
    return 0;
}