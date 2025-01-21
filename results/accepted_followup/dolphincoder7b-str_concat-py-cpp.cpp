#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1 = "hello";
  cout << (s1 + " world") << endl;

  string s2 = (s1 + " world");
  cout << s2 << endl;

  // Correcting the join function to handle vector of strings instead of lists
  vector<string> v{s1, "world", "mom"};
  s2 = ", ".join(v);
  cout << s2 << endl;

  return 0;
}