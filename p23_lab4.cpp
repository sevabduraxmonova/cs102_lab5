#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    srand(time(0));

    int rankIndex = rand() % 13;
    int suitIndex = rand() % 4;

    cout << "You picked: " << ranks[rankIndex] << " of " << suits[suitIndex] << endl;

    return 0;
}