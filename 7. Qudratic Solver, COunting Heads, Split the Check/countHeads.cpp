#include "countHeads.h"
#include <iostream>

using namespace std;

int choose(int n, int k){
    int ans = 0;
    if(n < k){
        return 0;
    }
    int x = 1, y = 1, w = 1;
    for(int i = 1; i <= n; i++){
        x = x * i;
    }
    for(int i = 1; i <= k; i++){
        y = y * i;
    }
    for(int i = 1; i <= (n-k); i++){
        w = w * i;
    }
    ans = x / (y * w);
    return ans;
}