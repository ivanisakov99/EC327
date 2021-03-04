#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    
    int randomNumber = rand() % 5000 + 1;
    int guess = -1;

    while (guess != randomNumber) {
        cout << "Please guess the number: ";
        cin >> guess;

        if (cin.fail()) {
            cout << "Error! You didn’t insert a number!" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            guess = -1;
        } else if (guess != randomNumber) {
            cout << "Sorry, your guess is incorrect" << endl;
        } else {
            cout << "Congratulations, your guess is correct!" << endl;
        }

    }

    return 0;
}
