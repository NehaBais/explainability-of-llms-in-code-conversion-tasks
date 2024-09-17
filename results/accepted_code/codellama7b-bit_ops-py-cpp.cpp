#include <iostream>
using namespace std;

void bitwise_built_ins(int width, int a, int b) {
  int mask = (1 << width) - 1;
  cout << "AND:     0b" << setfill('0') << setw(width) << a << endl;
  cout << "& 0b" << setfill('0') << setw(width) << b << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a & b) & mask << endl;

  cout << "OR:      0b" << setfill('0') << setw(width) << a << endl;
  cout << "| 0b" << setfill('0') << setw(width) << b << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a | b) & mask << endl;

  cout << "XOR:     0b" << setfill('0') << setw(width) << a << endl;
  cout << "^ 0b" << setfill('0') << setw(width) << b << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a ^ b) & mask << endl;

  cout << "NOT:   ~ 0b" << setfill('0') << setw(width) << a << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (~a) & mask << endl;

  cout << "SHIFTS" << endl;

  cout << "RIGHT:   0b" << setfill('0') << setw(width) << a << endl;
  cout << ">> 1" << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a >> 1) & mask << endl;

  cout << "RIGHT:   0b" << setfill('0') << setw(width) << a << endl;
  cout << ">> 2" << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a >> 2) & mask << endl;

  cout << "RIGHT:   0b" << setfill('0') << setw(width) << a << endl;
  cout << ">> 4" << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a >> 4) & mask << endl;

  cout << "LEFT:   0b" << setfill('0') << setw(width) << a << endl;
  cout << "<< 1" << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a << 1) & mask << endl;

  cout << "LEFT:   0b" << setfill('0') << setw(width) << a << endl;
  cout << "<< 2" << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a << 2) & mask << endl;

  cout << "LEFT:   0b" << setfill('0') << setw(width) << a << endl;
  cout << "<< 4" << endl;
  cout << "= 0b" << setfill('0') << setw(width) << (a << 4) & mask << endl;
}

void helper_funcs(int width, int a) {
  int aa = a & ((1 << width) - 1); // sign-extending shift

  cout << "SIGN-EXTENDING ARITHMETIC SHIFT RIGHT" << endl;

  cout << "asr(" << width << ", " << a << ", 1)" << endl;
  cout << "= " << asr(width, a, 1) & ((1 << width) - 1) << endl;

  cout << "asr(" << width << ", " << aa << ", 1)" << endl;
  cout << "= " << asr(width, aa, 1) & ((1 << width) - 1) << endl;

  cout << "asr(" << width << ", " << a << ", 2)" << endl;
  cout << "= " << asr(width, a, 2) & ((1 << width) - 1) << endl;

  cout << "asr(" << width << ", " << aa << ", 2)" << endl;
  cout << "= " << asr(width, aa, 2) & ((1 << width) - 1) << endl;

  cout << "asr(" << width << ", " << a << ", 4)" << endl;
  cout << "= " << asr(width, a, 4) & ((1 << width) - 1) << endl;

  cout << "asr(" << width << ", " << aa << ", 4)" << endl;
  cout << "= " << asr(width, aa, 4) & ((1 << width) - 1) << endl;
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}