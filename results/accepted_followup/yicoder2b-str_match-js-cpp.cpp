#include <iostream>
#include <sstream> // for std::stringstream
#include <string>
using namespace std;

int main() {
  string stringA = "tacoloco", stringB = "co";
  bool q1, q2, q3, q2multi, m;
  int index, indexCount = 0;
  char *q2multi =
      (char *)"stringB.c_str()"; // Assuming a valid string for the moment

  // stringA starts with stringB
  q1 = (stringA.substr(0, stringB.length()) == stringB);

  // stringA contains stringB
  q2 = (stringA.find(stringB) != string::npos);
  if (q2) {
    cout << "2: Is '" << stringB << "' contained in '" << stringA
         << "'? Yes, at index " << stringA.find(stringB) << ".\n";
  } else {
    cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? No.\n";
  }
  // multiple matches
  q2multi = (char *)"stringB.c_str()";
  while ((m = sscanf(q2multi, "%*s%*[^0-9]%*[^\n]", &index)) != EOF) {
    if (index >= stringA.length())
      continue;
    q2matches[indexCount++] = index;
  }
  // stringA ends with stringB
  q3 = (stringA.substr(stringA.length() - stringB.length(), stringB.length()) ==
        stringB);

  cout << "StringA starts with StringB: " << q1 << "\n";
  cout << "StringA contains StringB: " << q2 << "\n";
  cout << "StringA ends with StringB: " << q3 << "\n";
}