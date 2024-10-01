#include <iostream>
#include <string>
using namespace std;
int main() {
  string str = "my String";
  string cstr = "Changed ";
  str = cstr + str;
  cout << str << endl;
  return 0;
}