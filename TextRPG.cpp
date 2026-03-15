#include <iostream>
#include <string>
using namespace std;


int main() {
    // Title Screen
    cout << "=====================" << endl;
    cout << "Welcome to TextRPG+ " << endl;
    cout << "=====================" << endl;
    cout << "An Adventure by You!" << endl;
    cout << "=====================" << endl;
    cout << "Made by Phillip. " << endl;
    cout << "=====================" << endl;
    
    string playerName;
    int health          = 200;
    int gold            = 100;
    int attack          = 30;
    int defense         = 30;

    cout << "What is your name Hero?" << endl;
    cout << "Input Name: " << endl;
    cin >> playerName;
    
    cout << "Welcome to TextRPG " << playerName << "!" << endl;

    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl;
    cout << "Defense: " << defense << endl;
    return 0;
}
