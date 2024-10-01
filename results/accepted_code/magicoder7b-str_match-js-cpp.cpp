#include <iostream>
#include <regex>
#include <string>
#include <vector>
using namespace std;

int main() {
  string stringA = "tacoloco";
  string stringB = "co";
  bool q1, q2, q3;
  vector<int> q2matches;

  // stringA starts with stringB
  q1 = (stringA.substr(0, stringB.size()) == stringB);

  // stringA contains stringB
  q2 = (stringA.find(stringB) != string::npos);

  // multiple matches
  regex re(stringB);
  sregex_iterator it(stringA.begin(), stringA.end(), re), end;

  for (; it != end; ++it) {
    q2matches.push_back((*it).position());
  }

  // stringA ends with stringB
  q3 = (stringA.substr(stringA.size() - stringB.size()) == stringB);

  cout << "1: Does '" << stringA << "' start with '" << stringB << "? "
       << (q1 ? "Yes." : "No.") << endl;
  if (q2) {
    cout << "2: Is '" << stringB << "' contained in '" << stringA
         << "'? Yes, at index " << q2 << ".";
    if (!q2matches.empty()) {
      cout << ", and it happens " << q2matches.size() << " times within '"
           << stringA << "', at indices ";
      for (int i = 0; i < q2matches.size(); ++i) {
        cout << (i == 0 ? "" : (i + 1 < q2matches.size() ? ", " : " and "))
             << q2matches[i];
      }
      cout << "." << endl;
    }
  } else {
    cout << "2: Is '" << stringB << "' contained in '" << stringA << "? No."
         << endl;
  }
  cout << "3: Does '" << stringA << "' end with '" << stringB << "'? "
       << (q3 ? "Yes." : "No.") << endl;

  return 0;
}