#include <iostream>
#include "countHeads.h"

using namespace std;

int main(){
    char q;
    do{
        int n = 0, k = 0;
        unsigned int ans = 0;
        cout << "How many coins would you like to flip? ";
        cin >> n;
        cout << "How many heads do you want? ";
        cin >> k;
        ans = choose(n, k);
        cout << "Flipping " << n << " coins, we can get " << k << " heads " << ans << " ways." << endl;
        cout << "Flip again? (y/n) ";
        cin >> q;
    }while(q == 'y');
    cout << "\nProgram ends\n" << endl;
    return 0;
}