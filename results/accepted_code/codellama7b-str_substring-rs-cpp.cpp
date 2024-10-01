#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index n (c文字)
  cout << s.substr(n, m) << endl;

  // Print all characters starting at index n (c文字化けdef)
  cout << s.substr(n) << endl;

  // Print all characters except the last (abc文字化けde)
  string rev = s.substr(0, s.size() - 1);
  cout << rev << endl;

  // Print 3 characters starting with 'b' (bc文)
  int cpos = s.find('b');
  cout << s.substr(cpos, m) << endl;

  // Print 3 characters starting with "けd" (けde)
  int spos = s.find("けd");
  cout << s.substr(spos, m) << endl;

  return 0;
}