#include <iostream>

using namespace std;

int main(){
    int number = 0, count = 0;

    while(1){
        cout << "What number to check? ";
        cin >> number;

        if(number < 0){
            cout << "I don't deal with negativity." << endl;
            return -1;
        }

        cout << "Factors: ";
        for(int factor = 1; factor <= number; factor++){
            if(number % factor == 0){
               (factor != number) ? cout << factor << ", " : cout << factor;
               count++;
            }
        }
        cout << endl;

        if(count == 2){
            cout << "This number is a Prime!" << endl;
        }
        count = 0;
    }
    return 0;
}