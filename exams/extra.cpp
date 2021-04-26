#include "extra.h"
#include <bitset>
#include <string>
#include <cstring>

using namespace std;

char *toBin(string s) {
  string result = "";
  for (int i = 0; i < s.length(); i++) {
    bitset<8> bits = s[i];
    result.append(bits.to_string());
  }

  char * resultString = new char[result.length() + 1];
  strcpy(resultString, result.c_str());

  return resultString;
}
