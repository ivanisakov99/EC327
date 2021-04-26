#include "Q5.h"
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int transcript(string first, string last) {
  ifstream input("grades.txt");
  string fileFirst, fileLast, course, grade;
  string result = "";

  input >> fileFirst >> fileLast >> course >> grade;

  while (!input.eof()) {
    if (fileFirst == first && fileLast == last) {
      result.append(course);
      result.append(" ");
      result.append(grade);
      result.append("\n");
    }
    input >> fileFirst >> fileLast >> course >> grade;
  }

  if (result.length() != 0) {
    ofstream output("transcript.txt");
    output << result;
    input.close();
    output.close();
    return 0;
  }

  input.close();
  return -1;
}
