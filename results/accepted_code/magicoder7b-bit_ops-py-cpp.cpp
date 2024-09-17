#include <iostream>
using namespace std;

// Bitmask for the specified bitwidth
const int mask = ~0; //(1 << bitWidth) - 1;

void printBinary(int num, int width) {
  cout << "0b" << bitset<8>(num & mask) << "\n";
}

// Bitwise AND
int andFunc(int a, int b, int width) { return (a & b) & mask; }

// Bitwise OR
int orFunc(int a, int b, int width) { return (a | b) & mask; }

// Bitwise XOR
int xorFunc(int a, int b, int width) { return (a ^ b) & mask; }

// Bitwise NOT
int notFunc(int a, int width) { return ~a & mask; }

// Right shift
int rightShift(int a, int b, int width) {
  if (b == 0)
    return (a >> 1) & mask;
  else {
    for (int i = 0; i < b; ++i) {
      a = (a >> 1) | ((a & 1) << (width - 1));
    }
  }
  return a & mask;
}

// Left shift
int leftShift(int a, int b, int width) {
  if (b == 0)
    return (a << 1) & mask;
  else {
    for (int i = 0; i < b; ++i) {
      a = ((a << 1) & mask) | (a >> (width - 1));
    }
  }
  return a & mask;
}

void helperFuncs(int width, int a) {
  cout << "Bitwise AND:\n";
  printBinary(andFunc(a, 27, width), width);
  cout << "\nBitwise OR:\n";
  printBinary(orFunc(a, 125, width), width);
  cout << "\nBitwise XOR:\n";
  printBinary(xorFunc(a, 63, width), width);
  cout << "\nBitwise NOT:\n";
  printBinary(notFunc(a, width), width);
}

int main() {
  int a = 27;
  int b = 125;

  cout << "Bitwise AND:\n";
  printBinary(andFunc(a, b, 8), 8);

  cout << "\nBitwise OR:\n";
  printBinary(orFunc(a, b, 8), 8);

  cout << "\nBitwise XOR:\n";
  printBinary(xorFunc(a, b, 8), 8);

  cout << "\nBitwise NOT:\n";
  printBinary(notFunc(a, 8), 8);

  helperFuncs(8, a);

  return 0;
}