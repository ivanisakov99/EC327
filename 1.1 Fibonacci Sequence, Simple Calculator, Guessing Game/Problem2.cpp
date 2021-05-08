#include <iostream>

using namespace std;

int main() {
    int first, second;
    char op;

    // Getting the input
    cout << "Enter an expression to evaluate: ";
    cin >> first >> op >> second;

    // Error checking
    if(cin.fail()){
        cout << "Error! You did not provide two numerals as operands." << endl;
    }
    else if(op == '/' && second == 0){
        cout << "Error! You can't divide a number by 0!" << endl;
    }
    else{
        switch (op) {
            case '*':
                cout << "Result: " << (first * second) << endl;
                break;
            case '/':
                cout << "Result: " << ((float) first / second) << endl;
                break;
            case '+':
                cout << "Result: " << (first + second) << endl;
                break;
            case '-':
                cout << "Result: " << (first - second) << endl;
                break;
            default:
                cout << "Error! " << "\'" << op <<  "\'" << " is not a supported operator." << endl;
                break;
        }
    }

    return 0;
}
