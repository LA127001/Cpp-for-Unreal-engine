#include <bits/stdc++.h>
using namespace std;

int attack (int damage){
    return damage - 20;
}

int attack (int damage, int criticalMultiplier){
    return damage - (20 * criticalMultiplier);
}
int main(){
    
    cout<< "Attack1: " << attack(100) << endl;
    cout<< "Attack2: " << attack(100, 3);

    return 0;
}