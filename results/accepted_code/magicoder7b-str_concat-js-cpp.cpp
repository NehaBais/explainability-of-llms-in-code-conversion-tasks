#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "hello";
  s += " there!"; // Concatenate another string literal to the variable s.
  cout << s;      // Outputs: hello there!
  return 0;
}