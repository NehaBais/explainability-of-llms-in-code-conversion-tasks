#include <iostream>
using namespace std;
int main() {
  char str[13] = "Good Morning";
  // Append the string variable with another string literal in the most
  // idiomatic way.
  strcat(str, " to all");
  cout << str << endl;
  return 0;
}