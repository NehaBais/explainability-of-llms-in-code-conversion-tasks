#include <iostream>
using namespace std;
int main() {
  string s = "hello";
  cout << s + "literal" << endl;
  string s2 = s + "literal";
  cout << s2 << endl;
}