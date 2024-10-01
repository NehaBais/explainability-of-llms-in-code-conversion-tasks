#include <iostream>
using namespace std;
void print_logic(int a, int b) {
  cout << (a && b) << " ";
  cout << (a || b) << " ";
  cout << (!a) << " ";
}
// Don't edit the main function!
int main() {
  print_logic(true, false);
  return 0;
}