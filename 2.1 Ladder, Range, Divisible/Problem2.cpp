#include <iostream>

using namespace std;

int main(){
    int start = 0, stop = 0, step = 0;

    while(1){
        cout << "Start = ";
        cin >> start;

        cout << "Stop = ";
        cin >> stop;

        cout << "Step = ";
        cin >> step;

        if(start < stop){
            for(int i = start; i <= stop; i = i + step){
                (i <= stop - step) ? cout << i << ", " : cout << i;
            }
            cout << endl;
        }
        else if(start > stop){
            for(int i = start; i >= stop; i = i - step){
                (i >= stop + step) ? cout << i << ", " : cout << i;
            }
            cout << endl;
        }
        else{
            cout << "Bye!" << endl;
            return -1;
        }
    }

    return 0;
}