#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string stringA = "tacoloco";
  string stringB = "co";

  // Determine if stringA starts with stringB
  if (stringA.substr(0, stringB.length()) == stringB) {
    cout << "1: Does '" << stringA << "' start with '" << stringB << "'? Yes."
         << endl;
  } else {
    cout << "1: Does '" << stringA << "' start with '" << stringB << "'? No."
         << endl;
  }

  // Determine if stringA contains stringB at any location
  size_t q2 = stringA.find(stringB);
  if (q2 != string::npos) {
    cout << "2: Is '" << stringB << "' contained in '" << stringA
         << "'? Yes, at index " << q2 << "." << endl;
  } else {
    cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? No."
         << endl;
  }

  // Determine if stringA ends with stringB
  if (stringA.substr(stringA.length() - stringB.length()) == stringB) {
    cout << "3: Does '" << stringA << "' end with '" << stringB << "'? Yes."
         << endl;
  } else {
    cout << "3: Does '" << stringA << "' end with '" << stringB << "'? No."
         << endl;
  }

  return 0;
}