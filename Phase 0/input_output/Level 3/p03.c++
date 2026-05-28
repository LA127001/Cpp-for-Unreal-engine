#include <iostream>
#include <string>
using namespace std;

int main()
{

    string player_name;
    int player_score;

    string player_name_2;
    int player_score_2;

    cout << "Enter Player Name: ";
    getline(cin, player_name);

    cout << "Enter Player Score: ";
    cin >> player_score;

    cin.ignore(); // fix the newline buffer

    cout << "_________" << endl;

    cout << "Enter Player Name: ";
    getline(cin, player_name_2);

    cout << "Enter Player Score: ";
    cin >> player_score_2;

    cout << "\nGame Players:\n";

    cout << "Name: " << player_name << " | Score: " << player_score << endl;
    cout << "Name: " << player_name_2 << " | Score: " << player_score_2 << endl;

    return 0;
}