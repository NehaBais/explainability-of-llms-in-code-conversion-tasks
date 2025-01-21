#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "my String";
  const char *cstr = "Changed ";
  str = string(cstr) + str;
  cout << str << endl;
  return 0;
}