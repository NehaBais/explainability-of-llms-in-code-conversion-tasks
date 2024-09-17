#include
using namespace std;

void printBits(int width, int a, int b) {
  cout << "    AND:     0b" << hex << a << " ";
  cout << "& 0b" << hex << b << " ";
  cout << "= 0b" << hex << (a & b) << endl;

  cout << "    OR:      0b" << hex << a << " ";
  cout << "| 0b" << hex << b << " ";
  cout << "= 0b" << hex << (a | b) << endl;

  cout << "    XOR:     0b" << hex << a << " ";
  cout << "^ 0b" << hex << b << " ";
  cout << "= 0b" << hex << (a ^ b) << endl;

  int mask = (1 << width) - 1;
  cout << "    NOT:   ~ 0b" << hex << a << " ";
  cout << "= 0b" << hex << (~a & mask) << endl;

  cout << "    SHIFTS\n\n      RIGHT:   0b" << hex << a << " ";
  cout << ">> 1" << " = 0b" << hex << (a >> 1) << endl;
  cout << "     LEFT:    0b" << hex << a << " ";
  cout << "<<" << 1 << " = 0b" << hex << (a << 1) << endl;
}

int rotr(int width, int a, int n) {
  if (n < 0)
    return rotl(width, a, -n);
  else if (n == 0)
    return a;
  else {
    int mask = (1 << width) - 1;
    a &= mask;
    n %= width;
  return (((a >> n)     // top moved down
             | ((a & ((1 << n) - 1))   // Bottom masked...
                << (width - n)));   // ... then moved up
  }
}

int rotl(int width, int a, int n) {
  if (n < 0)
    return rotr(width, a, -n);
  else if (n == 0)
    return a;
  else {
    int mask = (1 << width) - 1;
    a &= mask;
    n %= width;
    return (((a << n) & mask)      // bottom shifted up and masked
            | (a >> (width - n))); // Top moved down
  }
}

int asr(int width, int a, int n) {
  if (n < 0)
    return rotl(width, a, -n);
  else {
    int mask = (1 << width) - 1;
    int aa = a | (1 << width);
    a &= mask;
    n %= width;
  return (((a >> n)     // top moved down
             | ((a & ((1 << n) - 1))   // Bottom masked...
                << (width - n)));   // ... then moved up
  }
}

void helperFuncs(int width, int a) {
  cout << "\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n\n";

  cout << "    asr(" << width << ", 0b" << hex << a << ") ";
  cout << "=      0b" << hex << asr(width, a, 1) << endl;
  cout << "    asr(" << width << ", 0b" << hex << aa << ") ";
  cout << "=      0b" << hex << asr(width, aa, 1) << endl;
  cout << "    asr(" << width << ", 0b" << hex << a << ") ";
  cout << "=      0b" << hex << asr(width, a, 2) << endl;
  cout << "    asr(" << width << ", 0b" << hex << aa << ") ";
  cout << "=      0b" << hex << asr(width, aa, 2) << endl;
  cout << "    asr(" << width << ", 0b" << hex << a << ") ";
  cout << "=      0b" << hex << asr(width, a, 4) << endl;
  cout << "    asr(" << width << ", 0b" << hex << aa << ") ";
  cout << "=      0b" << hex << asr(width, aa, 4) << endl;
}

int main() {
  printBits(8, 27, 125);
  helperFuncs(8, 27);
  return 0;
}