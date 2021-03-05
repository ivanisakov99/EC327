#include <iostream>

using namespace std;

int main() {
    int input;

    cout << "Enter the length of the sequence: ";
    cin >> input;

    if (cin.fail()) {
        cout << "Error! You did not provide a number." << endl;
        return -1;
    }

    int prevPrev = 0;
    int prev = 0;
    int current = 1;

    for (int i = 0; i < input; i++) {
        if (i == 0) {
            cout << "0" << endl;
        } else if (i == 1) {
            cout << current << endl;  
        } else {
            prevPrev = prev;
            prev = current;
            current = prevPrev + prev;

            cout << current << endl;
        }
    }
    cout << endl;

    return 0;
}
