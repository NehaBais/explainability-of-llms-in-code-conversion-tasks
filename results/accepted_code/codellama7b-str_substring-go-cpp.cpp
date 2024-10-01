#include <cstddef>
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s = "ABCDEFGH";
  int n = 2, m = 3;
  // starting from n characters in and of m length
  cout << "Start " << n << ", length " << m << ":    ";
  for (auto it = s.begin() + n; it != s.end() && it < s.begin() + n + m; it++) {
    cout << *it;
  }
  cout << endl;
  // starting from n characters in, up to the end of the string
  cout << "Start " << n << ", to end:      ";
  for (auto it = s.begin() + n; it != s.end(); it++) {
    cout << *it;
  }
  cout << endl;
  // whole string minus last character
  cout << "All but last:         ";
  for (auto it = s.begin(); it < s.end() - 1; it++) {
    cout << *it;
  }
  cout << endl;
  // starting from a known character within the string and of m length
  size_t dx = s.find('D');
  cout << "Start 'D', length " << m << ":  ";
  for (auto it = s.begin() + dx; it != s.end() && it < s.begin() + dx + m;
       it++) {
    cout << *it;
  }
  cout << endl;
  // starting from a known substring within the string and of m length
  size_t sx = s.find("DE");
  cout << "Start \"DE\", length " << m << ": ";
  for (auto it = s.begin() + sx; it != s.end() && it < s.begin() + sx + m;
       it++) {
    cout << *it;
  }
  cout << endl;
  return 0;
}