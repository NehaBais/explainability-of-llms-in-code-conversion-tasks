#include <iostream>
using namespace std;

int main() {
  // string variable equal to any text value
  string s = "hello";

  // output string variable
  cout << s << endl;

  // this output requested by original task descrption, although
  // not really required by current wording of task description.
  cout << s + " literal" << endl;

  // concatenate variable and literal, assign result to another string variable
  string s2 = s + " literal";

  // output second string variable
  cout << s2 << endl;

  return 0;
}