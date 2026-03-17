#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string playerName;
    int hp     = 100;
    int gold   = 10;
    int attack = 5;

    cout << "==============================" << endl;
    cout << "         C++ QUEST            " << endl;
    cout << "==============================" << endl;
    cout << "Enter your hero's name: ";
    cin >> playerName;
    cout << "Welcome, " << playerName << "!\n";

    bool running = true;

    while (running) {
        cout << "\n=============================" << endl;
        cout << " HP: " << hp << " | Gold: " << gold << endl;
        cout << "=============================" << endl;
        cout << "[1] Explore" << endl;
        cout << "[2] Rest"    << endl;
        cout << "[3] Stats"   << endl;
        cout << "[0] Quit"    << endl;
        cout << "> ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You venture into the forest...\n";
                if (rand() % 2 == 0) {
                    cout << "A goblin jumps out!\n";
                    int goblinHp  = 20;
                    int goblinAtk = 4;
                    goblinHp -= attack;
                    hp       -= goblinAtk;
                    cout << "You deal " << attack   << " damage.\n";
                    cout << "Goblin hits you for "  << goblinAtk << ".\n";
                    if (goblinHp <= 0) {
                        cout << "Goblin defeated! +5 gold.\n";
                        gold += 5;
                    } else {
                        cout << "The goblin flees.\n";
                    }
                } else {
                    cout << "All clear. You find 3 gold.\n";
                    gold += 3;
                }
                break;
            case 2:
                hp += 15;
                cout << "You rest. HP is now " << hp << ".\n";
                break;
            case 3:
                cout << "\n--- " << playerName << " ---" << endl;
                cout << "HP:     " << hp     << endl;
                cout << "Attack: " << attack << endl;
                cout << "Gold:   " << gold   << endl;
                break;
            case 0:
                running = false;
                break;
            default:
                cout << "Invalid choice.\n";
        }

        if (hp <= 0) {
            cout << "\nYou have been slain. Game over.\n";
            running = false;
        }
    }

    cout << "\nThanks for playing, " << playerName << "!\n";
    return 0;
}