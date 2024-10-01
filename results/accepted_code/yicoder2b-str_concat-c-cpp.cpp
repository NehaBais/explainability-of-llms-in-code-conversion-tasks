#include <iostream>
#include <string>
using namespace std;

int main() {
  const char *s = "hello";
  string s1(s);                // equivalent to s1 = s
  string s2 = s1 + " literal"; // equivalent to s2 = s concatenated with another
                               // string literal
  cout << s1 << endl;          // prints "hello"
  cout << s2 << endl;          // prints "helloliteral"
  return 0;
}