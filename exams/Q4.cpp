#include "Q4.h"
#include <string>
#include <cstring>

using namespace std;

char* nthWord(char word[], int n) {
  int i = 0;
  int counter = 1;
  string resultString = "";

  if (n != 1) {
    for (i = 0; i < strlen(word); i++) {
      if (word[i] == ' ') {
        if (counter == (n - 1)) {
          break;
        }
        counter++;
      }
    }
    i++;
  }

  while (word[i] != ' ' && word[i] != '\0') {
    resultString += word[i];
    i++;
  }

  char* result = new char[resultString.size() + 1];
  strcpy(result, resultString.c_str());

  return result;

}
