#include
#include
using namespace std;
void bitwise(int16_t a, int16_t b) {
  uint16_t ua = uint16_t(a);
  uint16_t ub = uint16_t(b);
  cout << "a: " << bitset<16>(ua) << endl;
  cout << "b: " << bitset<16>(ub) << endl;
  cout << "and: " << bitset<16>(uint16_t(a & b)) << endl;
  cout << "or: " << bitset<16>(uint16_t(a | b)) << endl;
  cout << "xor: " << bitset<16>(uint16_t(a ^ b)) << endl;
  cout << "not: " << bitset<16>(~ua) << endl;
}
int main() {
  bitwise(-3, 5);
  return 0;
}