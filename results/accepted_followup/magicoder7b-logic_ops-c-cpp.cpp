#include <iostream>
using namespace std;

void print_logic(int a, int b) {
  cout << "a and b is " << (a && b) << endl;
  cout << "a or b is " << (a || b) << endl;
  cout << "not a is " << (!a) << endl;
}

int main() {
  print_logic(true, false); // example usage of the function. You can call it
                            // with any parameters as per your requirements.
  return 0;
}