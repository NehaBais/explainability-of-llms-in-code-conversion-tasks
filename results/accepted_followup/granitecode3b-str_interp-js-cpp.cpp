#include
using namespace std;
int main() {
  string original = "Mary had a X lamb";
  string little = "little";

  // String interpolation using the replace function in C++
  string replaced = original.replace(original.find("X"), 1, little);

  cout << "Original string: " << original << endl;
  cout << "Replaced string: " << replaced << endl;

  return 0;
}