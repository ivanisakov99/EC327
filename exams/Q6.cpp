#include "Q6.h"

int bin(int n, int k) {
  if (k == 0 || n == k) {
    return 1;
  } else {
    return bin(n - 1, k - 1) + bin(n - 1, k);
  }
}
