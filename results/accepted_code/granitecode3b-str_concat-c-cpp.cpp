#include
using namespace std;

string sconcat(string s1, string s2) { return s1 + s2; }

int main() {
  string s = "hello";
  string s2 = sconcat(s, " literal");
  cout << s << endl;  // prints "hello" literal
  cout << s2 << endl; // prints "hello literal"
  return 0;
}