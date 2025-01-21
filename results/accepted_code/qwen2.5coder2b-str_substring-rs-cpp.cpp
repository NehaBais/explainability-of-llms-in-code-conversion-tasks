#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  cout << s.substr(n, m) << endl;

  // Print all characters starting at index 2 (c文字化けdef)
  for (int i = n; i < s.length(); i++) {
    cout << s[i];
  }
  cout << endl;

  // Print all characters except the last (abc文字化けde)
  string rs = string(s.rbegin(), s.rend());
  for (int i = 1; i < rs.length(); i++) {
    cout << rs[i];
  }
  cout << endl;

  // Print 3 characters starting with 'b' (bc文)
  int pos = s.find('b');
  if (pos != -1) {
    string bsub = s.substr(pos, m);
    for (int i = 0; i < bsub.length(); i++) {
      cout << bsub[i];
    }
    cout << endl;
  }

  // Print 3 characters starting with "けd" (けde)
  pos = s.find("けd");
  if (pos != -1) {
    string ked_sub = s.substr(pos, m);
    for (int i = 0; i < ked_sub.length(); i++) {
      cout << ked_sub[i];
    }
    cout << endl;
  }

  return 0;
}