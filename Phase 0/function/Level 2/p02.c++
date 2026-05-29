#include <bits/stdc++.h>
using namespace std;

int calculateXP (int enemiesDefated){
    return enemiesDefated * 10;
}

int calculateXP (int enemiesDefated, int bonusXP){
    return (enemiesDefated * 10) + bonusXP;

}

int main(){
     
   cout << "XP 1: " << calculateXP(5) <<endl;
   cout << "XP2: " << calculateXP(5,20) <<endl;

    return 0;
}