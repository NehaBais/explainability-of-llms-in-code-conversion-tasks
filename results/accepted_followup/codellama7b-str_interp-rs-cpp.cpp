#include <iostream>
#include <string>
using namespace std;

int main() {
  string originalString = "Mary had a X lamb.";
  string replacementValue = "little";
  string result = originalString.replace("X", replacementValue);
  cout << result << endl;

  return 0;
}