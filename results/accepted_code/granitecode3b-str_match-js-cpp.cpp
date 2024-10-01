#include
#include
using namespace std;

int main() {
  string stringA = "tacoloco", stringB = "co";
  int q1, q2, q3;
  vector q2matches;

  // stringA starts with stringB
  q1 = (stringA.length() >= stringB.length()) &&
       (stringA.substr(0, stringB.length()) == stringB);

  // stringA contains stringB
  q2 = stringA.find(stringB);

  // multiple matches
  regex q2multi(stringB);
  smatch m;
  while (regex_search(stringA, m, q2multi)) {
    q2matches.push_back(m.position());
  }

  // stringA ends with stringB
  q3 = (stringA.length() >= stringB.length()) &&
       (stringA.substr(stringA.length() - stringB.length()) == stringB);

  cout << "1: Does 'tacoloco' start with 'co'? " << (q1 ? "Yes." : "No.")
       << endl;
  cout << "2: Is 'co' contained in 'tacoloco'? "
       << ((q2 != string::npos) ? "Yes, at index " + to_string(q2) + "."
                                : "No.")
       << endl;
  if (q2 != string::npos && q2matches.size() > 1) {
    cout << "   In fact, it happens " << q2matches.size()
         << " times within 'tacoloco', at index"
         << (q2matches.size() > 1 ? "es" : "") << " " << join(q2matches, ", ")
         << "." << endl;
  }
  cout << "3: Does 'tacoloco' end with 'co'? " << (q3 ? "Yes." : "No.") << endl;

  return 0;
}