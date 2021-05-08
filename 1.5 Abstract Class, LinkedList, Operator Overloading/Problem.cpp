#include <iostream>
#include "List.h"

using namespace std;

int main(){
    List<int> list;

    list.append(1);

    list.append_tail(3);
    
    list.insert(2,2);
    
    list.remove();
    
    cout << list << endl;

    return 0;
}