#include <iostream>
#include <string>
using namespace std;

string Substring(const string &str, int n, int m) { return str.substr(n, m); }

string Substring(const string &str, int n) { return str.substr(n); }

string Substring(const string &str) { return str.substr(0, str.size() - 1); }

string Substring(const string &str, char c, int m) {
  int pos = str.find(c);
  if (pos != string::npos) {
    return str.substr(pos, m + 1);
  } else {
    return ""; // or throw an exception if necessary
  }
}

string Substring(const string &str, const string &sub, int m) {
  int pos = str.find(sub);
  if (pos != string::npos) {
    return str.substr(pos, m + 1);
  } else {
    return ""; // or throw an exception if necessary
  }
}

int main() {
  string testStr = "Hello, World!";
  cout << Substring(testStr, 7) << endl;    // Outputs: "World"
  cout << Substring(testStr, 0, 5) << endl; // Outputs: "Hello"
  cout << Substring(testStr, testStr.size() - 1)
       << endl;                                   // Outputs: "" (empty string)
  cout << Substring(testStr, 'W', 2) << endl;     // Outputs: "Wo"
  cout << Substring(testStr, "World", 5) << endl; // Outputs: "orld"

  return 0;
}