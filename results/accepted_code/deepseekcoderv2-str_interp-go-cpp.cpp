#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Mary had a %s lamb";
  replace(str.begin(), str.end(), "%s", "little");
  cout << str << endl;
  return 0;
}