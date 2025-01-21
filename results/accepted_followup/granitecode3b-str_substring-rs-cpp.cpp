#include <iostream> // for cout and endl
#include <string>   // for string

using namespace std;

int main() {
  string s = "This is a sample string";

  size_t n = s.find("sample");
  cout << s.substr(n, 7) << endl;

  return 0;
}