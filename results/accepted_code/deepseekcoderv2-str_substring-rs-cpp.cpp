#include <iostream>
using namespace std;
int main() {
  string s = "abc文字化けdef";
  int n = 2, m = 3;

  // Print 3 characters starting at index 2 (c文字)
  cout << s.substr(n, m);
  cout << endl;

  // Print all characters starting at index 2 (c文字化けdef)
  cout << s.substr(n);
  cout << endl;

  // Print all characters except the last (abc文字化けde)
  for (int i = 0; i < s.size() - 1; ++i) {
    if (!isalpha(s[i])) {
      s.erase(i, 1);
    }
  }
  cout << s.substr(0, s.length() - 2) << endl;

  // Print 3 characters starting with 'b' (bc文)
  char cpos = s[s.find('b')];
  for (int i = cpos - 1; i < cpos + m && i < s.size(); ++i) {
    cout << s[i];
  }
  cout << endl;

  // Print 3 characters starting with "けd" (けde)
  char spos = s[s.find("けd")];
  for (int i = spos - 1; i < spos + m && i < s.size(); ++i) {
    cout << s[i];
  }
}