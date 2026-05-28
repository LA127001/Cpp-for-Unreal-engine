#include <bits/stdc++.h>
using namespace std;

int main(){
    
    bool playerAlive = true;
    int score = 75;

    if(playerAlive && score > 100){
        cout << "Player is alive";
    }
    else {
        cout << "Condition not satisfied";
    }
    return 0;
}