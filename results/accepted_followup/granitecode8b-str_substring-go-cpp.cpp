#include
#include
#include
using namespace std;
int main() {
  string s = "ABCDEFGH";
  int n = 2, m = 3;
  // for reference
  cout << "Index: ";
  for (int i = 0; i < s.length(); i++) {
    cout << i;
  }
  cout << endl;
  cout << "String: " << s << endl;
  // starting from n characters in and of m length
  cout << "Start " << n << ", length " << m << ": ";
  for (int i = n; i < n + m; i++) {
    cout << s[i];
  }
  cout << endl;
  // starting from n characters in, up to the end of the string
  cout << "Start " << n << ", to end: ";
  for (int i = n; i < s.length(); i++) {
    cout << s[i];
  }
  cout << endl;
  // whole string minus last character
  cout << "All but last: ";
  for (int i = 0; i < s.length() - 1; i++) {
    cout << s[i];
  }
  cout << endl;
  // starting from a known character within the string and of m length
  int dx = s.find('D');
  cout << "Start 'D', length " << m << ": ";
  for (int i = dx; i < dx + m; i++) {
    cout << s[i];
  }
  cout << endl;
  // starting from a known substring within the string and of m length
  int sx = s.find("DE");
  cout << "Start \"DE\", length " << m << ": ";
  for (int i = sx; i < sx + m; i++) {
    cout << s[i];
  }
  cout << endl;
  return 0;
}