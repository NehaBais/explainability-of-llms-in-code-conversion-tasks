#include
#include
using namespace std;

int startsWith(string container, string target) {
  int location = container.find(target);
  if (location != string::npos) {
    cout << "The first string starts with the second string at position "
         << location + 1 << endl;
  }
  return location != string::npos;
}

int endsWith(string container, string target) {
  int location = container.find_last_of(target);
  if (location != string::npos) {
    cout << "The first string ends with the second string at position "
         << location + 1 << endl;
  }
  return location != string::npos;
}

int doesContain(string container, string target) {
  size_t pos = container.find(target);
  if (pos != string::npos) {
    cout << "The first string contains the second string at position "
         << pos + 1 << endl;
  }
  return pos != string::npos;
}

int main() {
  string container = "Hello,Hell";
  string target = "Hell";
  cout << "Starts with Test (" << container << "," << target
       << ") : " << startsWith(container, target) << endl;

  container = "Code,ode";
  target = "ode";
  cout << "Ends with Test (" << container << "," << target
       << ") : " << endsWith(container, target) << endl;

  container = "Google,msn";
  target = "msn";
  cout << "Contains Test (" << container << "," << target
       << ") : " << doesContain(container, target) << endl;

  return 0;
}