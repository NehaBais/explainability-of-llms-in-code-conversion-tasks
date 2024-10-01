#include <string>
using namespace std;

int main() {
  string original = "Mary had a X lamb";
  string little = "little";
  // The replace function replaces 'X' with 'little' in the string
  original.replace(15, 3, little);
  cout << original << endl; // Outputs: "Mary had a little lamb"
  return 0;
}