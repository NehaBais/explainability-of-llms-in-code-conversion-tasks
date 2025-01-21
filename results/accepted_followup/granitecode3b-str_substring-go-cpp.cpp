#include
#include
using namespace std;
int main() {
  string s = "ABCDEFGH";
  int n, m;
  n = 2, m = 3;
  // for reference
  cout << "Index: ";
  for (int i = 0; i < s.length(); ++i) {
    cout << i << " ";
  }
  cout << endl;
  cout << "String: " << s << endl;
  // starting from n characters in and of m length
  cout << "Start " << n << ", length " << m << ":    " << s.substr(n, m)
       << endl;
  // starting from n characters in, up to the end of the string
  cout << "Start " << n << ", to end:      " << s.substr(n) << endl;
  // whole string minus last character
  cout << "All but last:         " << s.substr(0, s.length() - 1) << endl;
  // starting from a known character within the string and of m length
  int dx = s.find('D');
  cout << "Start 'D', length " << m << ":  " << s.substr(dx, m) << endl;
  // starting from a known substring within the string and of m length
  int sx = s.find("DE");
  cout << "Start \"DE\", length " << m << ": " << s.substr(sx, m) << endl;
  return 0;
}