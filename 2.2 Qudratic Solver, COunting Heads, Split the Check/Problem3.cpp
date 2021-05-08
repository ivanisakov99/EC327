#include <iostream>
#include "cashier.h"

using namespace std;

int main(){
    char q = 'y', item = 'f';
    double amount = 0, taxs = 0, total = 0, ototal = 0, totalp;
    int p = 0;
    
    do{
        cout << "What is the amount? $";
        cin >> amount;
        
        cout << "Is it (f)ood or (l)iquor? ";
        cin >> item;
        
        if(item != 'f' && item != 'l'){
            cout << "Error, invalid item input." << endl;
            continue;
        }
        
        taxs = tax(amount, item);
        total = tip(amount, taxs);
        
        ototal = ototal + total;
        
        cout << "Add more items? (y/n) ";
        cin >> q;
    
    }while(q == 'y');

    cout << "How many people are you splitting with? ";
    cin >> p;
    
    totalp = split(ototal, p);
    
    cout << "Your total will be $" << totalp << " per person." << endl;
    cout << "Program ends" << endl;
    
    return 0;
}