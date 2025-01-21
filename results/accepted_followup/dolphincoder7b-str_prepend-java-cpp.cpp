#include <iostream>
using namespace std;
int main() {
  string str = "def";
  cout << "Original String is: " << str << endl;
  str = "abc" + str;
  cout << "String after concatenation is: " << str << endl;
  return 0;
}