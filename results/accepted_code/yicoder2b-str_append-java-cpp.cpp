#include <iostream>
#include <sstream> // required for stringstream
using namespace std;
int main() {
  string str = "abc";
  cout << str << endl;
  str += "def";
  cout << str << endl;
  return 0;
}