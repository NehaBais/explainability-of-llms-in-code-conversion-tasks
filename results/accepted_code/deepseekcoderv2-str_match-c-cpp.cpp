#include <iostream>
#include <string>
using namespace std;

bool startsWith(const string &container, const string &target) {
  size_t clen = container.length(), tlen = target.length();
  if (clen < tlen)
    return false;
  return strncmp(&container[0], &target[0], tlen) == 0;
}

bool endsWith(const string &container, const string &target) {
  size_t clen = container.length(), tlen = target.length();
  if (clen < tlen)
    return false;
  return strncmp(&container[clen - tlen], &target[0], tlen) == 0;
}

bool doesContain(const string &container, const string &target) {
  size_t index = container.find(target);
  if (index != std::string::npos) {
    cout << "Index of match: " << index << endl;
  }
  return index != std::string::npos;
}

int main() {
  string container = "Hello";
  string target1 = "Hell";
  string target2 = "msn";

  cout << "Starts with Test ( Hello,Hell ) : ";
  if (startsWith(container, target1)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  cout << "Ends with Test ( Code,ode ) : ";
  if (endsWith("Code", "ode")) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  cout << "Contains Test ( Google,msn ) : ";
  doesContain("Google", "msn");

  return 0;
}