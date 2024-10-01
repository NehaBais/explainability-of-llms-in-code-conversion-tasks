#include
#include
#include
using namespace std;
string Substring(string str, int n, int m) { return str.substr(n, m); }
string Substring(string str, int n) { return str.substr(n); }
string Substring(string str) { return str.substr(0, str.length() - 1); }
string Substring(string str, char c, int m) {
  return str.substr(str.find(c), str.find(c) + m + 1);
}
string Substring(string str, string sub, int m) {
  return str.substr(str.find(sub), str.find(sub) + m + 1);
}
int main() {
  string str = "Hello World";
  cout << Substring(str, 3, 4) << endl;     // prints "lo W"
  cout << Substring(str, 0, 5) << endl;     // prints "Hello"
  cout << Substring(str) << endl;           // prints "Helo Wor"
  cout << Substring(str, 'l', 3) << endl;   // prints "ll Wor"
  cout << Substring(str, "Wor", 3) << endl; // prints "He ll Wor"
  return 0;
}