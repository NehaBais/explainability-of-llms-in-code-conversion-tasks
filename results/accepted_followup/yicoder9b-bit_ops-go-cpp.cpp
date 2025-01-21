#include <bitset>
#include <iostream>
using namespace std;

void bitwise(int16_t a, int16_t b) {
  cout << "a:   " << bitset<16>(a) << endl;
  cout << "b:   " << bitset<16>(b) << endl;
  ... // rest of the function body remains same as original code
}
int main() {
  bitwise(-460, 6);
  return 0;
}