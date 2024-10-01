#include <iostream>
using namespace std;

void print_logic(int a, int b) {
  cout << "a and b is " << (a && b) << endl;
  cout << "a or b is " << (a || b) << endl;
  cout << "not a is " << (!a) << endl;
}