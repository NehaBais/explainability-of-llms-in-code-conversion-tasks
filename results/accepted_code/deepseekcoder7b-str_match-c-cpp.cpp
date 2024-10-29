#include <iostream>
#include <string>
using namespace std;

bool startsWith(const string &container, const string &target) {
  return container.find(target) == 0;
}

bool endsWith(const string &container, const string &target) {
  return container.rfind(target) == (container.length() - target.length());
}

size_t doesContain(const string &container, const string &target) {
  size_t pos = container.find(target);
  if (pos != string::npos) {
    return pos; // returns the position of first occurrence
  } else {
    return string::npos;
  }
}

int main() {
  cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello", "Hell")
       << endl;
  cout << "Ends with Test ( Code,ode ) : " << endsWith("Code", "ode") << endl;
  size_t pos = doesContain("Google,msn", "msn");
  if (pos != string::npos) {
    cout << "Contains Test: Match found at position: " << pos << endl;
  } else {
    cout << "Contains Test : No match found!" << endl;
  }
}