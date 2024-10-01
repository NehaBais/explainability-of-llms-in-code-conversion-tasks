#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string adjective = "little";
  stringstream lyric;

  lyric << "Mary had a " << adjective << " lamb.";

  cout << lyric.str();

  return 0;
}