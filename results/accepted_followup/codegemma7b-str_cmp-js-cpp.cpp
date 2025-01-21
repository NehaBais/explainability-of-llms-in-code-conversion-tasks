#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "abcd";

  // Exact equality
  if (str1 == str2) {
    cout << "Equal" << endl;
  }

  // Compare strings
  if (str1.compare(0, str1.size(), str2, 0, str2.size(), false) == 0) {
    cout << "Equal (ignoring case)" << endl;
  }

  return 0;
}