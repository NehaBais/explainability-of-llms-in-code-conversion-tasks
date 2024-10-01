#include
#include
using namespace std;
string sconcat(const string &s1, const string &s2) {
  string s0 = s1 + s2;
  return s0;
}
int main() {
  const string s = "hello";
  string s2;

  cout << s << " literal" << endl;
  /* or */
  cout << s << " literal" << endl;

  s2 = sconcat(s, " literal");
  cout << s2 << endl;
  return 0;
}