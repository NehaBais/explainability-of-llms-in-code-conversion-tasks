#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "dcba";

  cout << (str1 == str2) << endl; // 0, equivalent to false
  cout << (str1 != str2) << endl; // 1, equivalent to true

  cout << ((int)str1 < (int)str2) << endl; // 1, equivalent to true
  cout << ((int)str1 > (int)str2) << endl; // 0, equivalent to false

  str1 = "ABCD";
  str2 = "abcd";

  cout << (str1.toLowerCase() == str2.toLowerCase())
       << endl; // error: 'class std::string' has no member named 'toLowerCase'

  transform(str1.begin(), str1.end(), str1.begin(),
            [](unsigned char c) { return tolower(c); });
  transform(str2.begin(), str2.end(), str2.begin(),
            [](unsigned char c) { return tolower(c); });

  cout << (str1 == str2) << endl; // 1, equivalent to true

  string numStr = "123";
  int num = 123;

  cout << (numStr == num)
       << endl; // error: no match for 'operator==' in 'numStr == num'

  int numInt = stoi(numStr);

  cout << (numInt == num) << endl; // 1, equivalent to true

  return 0;
}