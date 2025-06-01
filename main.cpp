#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // A new number for each time program runs
    srand(time(0));

    // Number between 0 and 100
    int random_num = rand() % 101;

    cout << "Guess a number between 0 and 100: ";

    int guess;
    int guess_count = 0;

    while (true) {
        cin >> guess;

        if (guess < 0 || guess > 100) {
            cout << "Please enter a number between 0 and 100." << endl;
            continue;
        }
        else if (guess < random_num) {
            cout << "That is too low! Try again: " << endl;
            guess_count++;
        }
        else if (guess > random_num) {
            cout << "That is too high! Try again: " << endl;
            guess_count++;
        }
        else {
            cout << "That is correct! You guessed the number in " << guess_count + 1 << " tries." << endl;
            break;
        }
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}