#include <iostream>
using namespace std;

int main()
{

    int health = 100;
    int stamina = 100;
    float score = 30.6;

    // Event 1: player gets hit

    health -= 20; // health is 80;

    // Event 2: player runs (stamina drop)
    stamina -= 30;

        // Event 3: player defeats enemy
        score += 50.5;

    // Event 4: player heals
    health += 10; // health is 90;

    return 0;
}