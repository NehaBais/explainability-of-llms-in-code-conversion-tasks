#include <iostream>
#include <string>
using namespace std;

int main() {
  string adjective = "little";
  string lyric = "Mary had a %s lamb";

  printf(lyric.c_str(), adjective.c_str()); // output: Mary had a little lamb
  return 0;
}