#include <iostream>
#include <string>
using namespace std;
int main() {
  string adjective = "little";
  string lyrics = string("Mary had a ") + adjective + string(" lamb");
  cout << lyrics;
  return 0;
}