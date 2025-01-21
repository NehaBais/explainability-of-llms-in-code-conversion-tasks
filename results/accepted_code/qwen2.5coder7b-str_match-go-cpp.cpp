#include <iostream>
#include <string>

using namespace std;

void match(string first, string second) {
  cout << "1. " << first << " starts with " << second << ": "
       << (first.substr(0, second.size()) == second) << endl;

  size_t pos = first.find(second);
  cout << "2. " << first << " contains " << second << ": "
       << (pos != string::npos) << endl;

  if (pos != string::npos) {
    cout << "2.1. at location " << pos << endl;

    while ((pos = first.find(second, pos + 1)) != string::npos) {
      cout << "2.2. at location " << pos << endl;
    }
  }

  cout << "3. " << first << " ends with " << second << ": "
       << (first.compare(first.length() - second.length(), second.size(),
                         second) == 0)
       << endl;
}

int main() {
  match("abracadabra", "abr");
  return 0;
}