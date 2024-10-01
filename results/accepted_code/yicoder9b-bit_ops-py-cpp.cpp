#include <bitset>
#include <iostream>
using namespace std;

void bitwise_built_ins(int width, int a, int b) {
  unsigned int mask = (1 << width) - 1;
  a &= mask;
  b &= mask;
  cout << "AND:     " << bitset<8>(a & b) << endl;
  cout << "OR:      " << bitset<8>(a | b) << endl;
  cout << "XOR:     " << bitset<8>(a ^ b) << endl;
  cout << "NOT:     " << bitset<8>((~a) & mask) << endl;

  cout << "SHIFTS\n";
  unsigned int rightShift = (a >> 1) & mask;
  unsigned int leftShift = (a << 1) & mask;
  cout << "RIGHT:   " << bitset<8>(rightShift) << endl;
  cout << "LEFT:    " << bitset<8>(leftShift) << endl;
}

int rotr(int width, int a, int n) {
  if (n < 0) {
    return rotl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    unsigned int mask = (1 << width) - 1;
    a &= mask;
    return ((a >> n) | ((a & ((1 << n) - 1))) << (width - n)) & mask;
  }
}

int rotl(int width, int a, int n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    unsigned int mask = (1 << width) - 1;
    a &= mask;
    return ((a << n) | (a >> (width - n))) & mask;
  }
}

int asr(int width, int a, int n) {
  if (n < 0) {
    return a << (-n);
  } else if (n == 0) {
    return a;
  } else {
    unsigned int mask = (1 << width) - 1;
    a &= mask;
    bool signbit = a & (1 << (width - 1));
    if (signbit) {
      int result = ((a >> n) | (-1 << (width - n))) & mask;
      return result;
    } else {
      return ((a >> n) | (0 << (width - n))) & mask;
    }
  }
}

void helper_funcs(int width, int a) {
  unsigned int mask = (1 << width) - 1;
  cout << "LEFT:   rotl : " << bitset<8>(rotl(width, a, 2)) << endl;
  cout << "RIGHT:  rotr : " << bitset<8>(rotr(width, a, 2)) << endl;
  int aa = a | (1 << (width - 1)); // set the sign bit
  for (int i = 1; i <= 4; ++i) {
    cout << "asr:     " << bitset<8>(asr(width, a, i)) << endl;
    cout << "asr:     " << bitset<8>(asr(width, aa, i)) << endl;
  }
}
int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}