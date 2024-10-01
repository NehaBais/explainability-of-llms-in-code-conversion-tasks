#include
using namespace std;
void print_logic(bool a, bool b) {
  cout << "a and b is " << (a && b) << endl;
  cout << "a or b is " << (a || b) << endl;
  cout << "not a is " << (!a) << endl;
}
int main() {
  // Test the function with some sample inputs
  print_logic(true, true);
  print_logic(false, true);
  print_logic(true, false);
  print_logic(false, false);
  return 0;
}