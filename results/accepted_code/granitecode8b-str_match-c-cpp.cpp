#include
#include
using namespace std;
int startsWith(const string &container, const string &target) {
  size_t clen = container.length(), tlen = target.length();
  if (clen < tlen)
    return 0;
  return container.substr(0, tlen).compare(target) == 0;
}
int endsWith(const string &container, const string &target) {
  size_t clen = container.length(), tlen = target.length();
  if (clen < tlen)
    return 0;
  return container.substr(clen - tlen).compare(target) == 0;
}
int doesContain(const string &container, const string &target) {
  size_t pos = container.find(target);
  return pos != string::npos;
}
int main() {
  cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello", "Hell")
       << endl;
  cout << "Ends with Test ( Code,ode ) : " << endsWith("Code", "ode") << endl;
  string container = "Google";
  string target = "msn";
  size_t pos = container.find(target);
  if (pos != string::npos) {
    cout << "Contains Test ( Google,msn ) : 1" << endl;
    cout << "Location of match: " << pos << endl;
  } else {
    cout << "Contains Test ( Google,msn ) : 0" << endl;
  }
  return 0;
}