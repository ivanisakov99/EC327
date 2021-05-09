#include <iostream>

using namespace std;

int main(){
    int n = 0;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0){
        return -1;
    }

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FooBar" << endl;
        }
        else if(i % 3 == 0){
            cout << "Foo" << endl;
        }
        else if(i % 5 == 0){
            cout << "Bar" << endl;
        }
        else{
            cout << i << endl;
        }
    }
    
    return 0;
}