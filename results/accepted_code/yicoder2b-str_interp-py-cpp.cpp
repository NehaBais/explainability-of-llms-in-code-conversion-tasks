#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string original = "Mary had a X lamb.";
  istringstream iss(original);
  string word1, word2;
  iss >> word1 >> word2; // extracting words
  word2 = "big";
  ostringstream oss;
  oss << "Mary had a " << word2 << " lamb.";
  cout << oss.str();
  return 0;
}