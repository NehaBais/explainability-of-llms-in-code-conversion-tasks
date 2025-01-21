#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "ab";

  cout << (str1.find(str2) == 0)
       << endl; // Determining if the first string starts with second string

  if (str1.find(str2) != -1)
    cout << true << endl;
  else
    cout << false << endl;

  if (str1.find(str2, str1.find(str2) + 1) != -1)
    cout << true << endl;
  else
    cout << false << endl;

  cout << (str1.rfind(str2) == str1.length() - str2.length())
       << endl; // Determining if the first string ends with the second string

  return 0;
}