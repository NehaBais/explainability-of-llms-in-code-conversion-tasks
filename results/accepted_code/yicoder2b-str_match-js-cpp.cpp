#include <iostream>
#include <string>
using namespace std;

int main() {
  string stringA = "tacoloco", stringB = "co";
  bool q1, q2, q3, q2multi, m;
  int q2matches[100], indexCount = 0;

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
  q2multi = (stringB.c_str());
  while ((m = sscanf(q2multi.data(), "%*s%*[^0-9]%*[^\n]", &index)) != EOF) {
    if (index >= stringA.length())
      continue;
    q2matches[indexCount++] = index;
  }
  // stringA ends with stringB
  q3 = (stringA.substr(-stringB.length(), stringB.length()) == stringB);

  cout << "1: Does '" << stringA << "' start with '" << stringB << "'? "
       << (q1 ? "Yes." : "No.") << endl;
  cout << "3: Does '" << stringA << "' end with '" << stringB << "'? "
       << (q3 ? "Yes." : "No.") << endl;
}