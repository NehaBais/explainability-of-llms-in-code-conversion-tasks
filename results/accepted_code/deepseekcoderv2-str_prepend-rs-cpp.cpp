#include <iostream>
#include <string>
using namespace std;
int main() {
  string s = "World";
  s.insert(0, "Hello ");
  cout << s << endl;
  return 0;
}