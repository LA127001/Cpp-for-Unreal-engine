#include <bits/stdc++.h>
using namespace std;

int calculateDamage(int currentHealth, int damageAmount){
  return currentHealth - damageAmount;
}

int healPlayer(int currentHealth, int heal){
    return currentHealth + heal;
}

bool isPlayerDead(int currentHealth){
    return currentHealth <= 0;
}

int main(){
   
    int health = 100;

    cout << "Health is: " <<health <<endl;

    health = calculateDamage(health, 30);
    cout << "After Damage: " <<health <<endl;

    health = healPlayer(health, 20);
    cout << "After Heal: " <<health <<endl;

    if(!isPlayerDead(health)){
        cout << "Player is alive" <<endl;
    }
    else{
        cout << "Player is dead" <<endl;
    }

    return 0;
}