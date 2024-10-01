#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abc文字化けdef";
  int n = 2, m = 3;

  // Print 3 characters starting at index 2 (c文字)
  cout << s.substr(n, m);

  // Print all characters starting at index 2 (c文字化けdef)
  cout << s.substr(n);

  // Print all characters except the last (abc文字化けde)
  string temp = "";
  for (int i = 0; i < s.length() - 1; i++) {
    temp += s[i];
  }
  cout << temp;

  // Print 3 characters starting with 'b' (bc文)
  int cpos = s.find('b');
  if (cpos != string::npos)
    cout << s.substr(cpos, m);

  // Print 3 characters starting with "けd" (けde)
  string sub = "けd";
  int spos = s.find(sub);
  if (spos != string::npos)
    cout << s.substr(spos, m);

  return 0;
}