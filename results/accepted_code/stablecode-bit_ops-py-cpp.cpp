#include <iostream>
using namespace std;

void bitwise_built_ins(int width, int a, int b) {
  int mask = ((1 << width) - 1);
  cout << "AND:" << endl;
    cout << "0b" << bitset<32>(a)).to_string() << " & 0b" << bitset<32>(b)).to_string() << " = 0b" << bitset<32>((a & b) & mask)).to_string() << endl;
    cout << "OR:" << endl;
    cout << "0b" << bitset<32>(a)).to_string() << " | 0b" << bitset<32>(b)).to_string() << " = 0b" << bitset<32>((a | b) & mask)).to_string() << endl;
    cout << "XOR:" << endl;
    cout << "0b" << bitset<32>(a)).to_string() << " ^ 0b" << bitset<32>(b)).to_string() << " = 0b" << bitset<32>((a ^ b) & mask)).to_string() << endl;
    cout << "NOT:" << endl;
    cout << "~0b" << bitset<32>(a)).to_string() << " = 0b" << bitset<32>((~a) & mask))).to_string() << endl;
}

void helper_funcs(int width, int a) {
  cout << "ROTATIONS:" << endl;
    cout << "asr(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 1)" << endl;
    cout << "rotl(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 1)" << endl;
    cout << "asr(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 2)" << endl;
    cout << "rotl(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 2)" << endl;
    cout << "asr(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 4)" << endl;
    cout << "rotl(" << width << ", 0b" << bitset<32>(a)).to_string() << ", 4)" << endl;
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}