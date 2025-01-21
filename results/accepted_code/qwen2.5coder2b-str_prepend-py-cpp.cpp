#include <iostream>
using namespace std;

int main() {
  string s = "12345678";
  s = "0" + s; // by concatenation
  cout << s;
  return 0;
}