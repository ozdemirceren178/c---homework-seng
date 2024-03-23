#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Die {
private:
    unsigned int seed;

public:
    Die() {
        seed = time(0);
    }

    int roll() const {
        return (rand_r(&seed) % 6) + 1;
    }
};

int main() {
    Die die;
    int playerTotal = 0;
    int computerTotal = 0;
    char choice;

    do {
        int computerRoll1 = die.roll();
        int computerRoll2 = die.roll();
        computerTotal = computerRoll1 + computerRoll2;
        cout << "Computer rolls: " << computerRoll1 << " and " << computerRoll2 << endl;

        cout << "Do you want to roll? (y/n): ";
        cin >> choice;

        if (choice == 'y') {
            int playerRoll1 = die.roll();
            int playerRoll2 = die.roll();
            playerTotal = playerRoll1 + playerRoll2;
            cout << "You rolled: " << playerRoll1 << " and " << playerRoll2 << endl;

            if (playerTotal > 21) {
                cout << "You lose. Your total is greater than 21." << endl;
                break;
            }
        }
    } while (choice == 'y');

    cout << "Computer's total: " << computerTotal << endl;
    cout << "Your total: " << playerTotal << endl;

    if (playerTotal > 21 || (computerTotal > playerTotal && computerTotal <= 21)) {
        cout << "Computer wins!" << endl;
    } else if (playerTotal == computerTotal) {
        cout << "It's a tie!" << endl;
    } else {
        cout << "You win!" << endl;
    }

    return 0;
}
