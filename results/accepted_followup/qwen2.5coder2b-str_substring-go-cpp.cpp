#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "ABCDEFGH";
  int n = 2, m = 3;

  // for reference
  cout << "Index: ";
  cout << "01234567" << endl;
  cout << "String: " << s << endl;

  // starting from n characters in and of m length
  string substring1 = s.substr(n, m);
  cout << "Start " << n << ", length " << m << ":    " << substring1 << endl;

  // starting from n characters in, up to the end of the string
  string substring2 = s.substr(n);
  cout << "Start " << n << ", to end:      " << substring2 << endl;

  // whole string minus last character
  string substring3 = s.substr(0, s.size() - 1);
  cout << "All but last:         " << substring3 << endl;

  // starting from a known character within the string and of m length
  int dx = s.find('D');
  string substring4 = s.substr(dx, m);
  cout << "Start 'D', length " << m << ":  " << substring4 << endl;

  // starting from a known substring within the string and of m length
  string sx = s.substr(0, 2);
  string substring5 = s.substr(sx.size());
  cout << `Start "DE", length ` << m << ": %s" << endl;

  return 0;
}