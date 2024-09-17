#include
using namespace std;
void bitwiseBuiltIns(int width, int a, int b) {
  int mask = (1 << width) - 1;
  cout << "    AND:     0b" << setw(width) << setfill('0') << a << " & 0b"
       << setw(width) << setfill('0') << b << " = 0b" << setw(width)
       << setfill('0') << (a & b) &
      mask << endl;
  cout << "    OR:      0b" << setw(width) << setfill('0') << a << " | 0b"
       << setw(width) << setfill('0') << b << " = 0b" << setw(width)
       << setfill('0') << (a | b) &
      mask << endl;
  cout << "    XOR:     0b" << setw(width) << setfill('0') << a << " ^ 0b"
       << setw(width) << setfill('0') << b << " = 0b" << setw(width)
       << setfill('0') << (a ^ b) &
      mask << endl;
  cout << "    NOT:   ~ 0b" << setw(width) << setfill('0') << a << " = 0b"
       << setw(width) << setfill('0') << (~a) &
      mask << endl;
  cout << "    SHIFTS" << endl;
  cout << "      RIGHT:   0b" << setw(width) << setfill('0') << a
       << " >> 1 = 0b" << setw(width) << setfill('0') << (a >> 1) &
      mask << endl;
  cout << "      LEFT:    0b" << setw(width) << setfill('0') << a
       << " << 1 = 0b" << setw(width) << setfill('0') << (a << 1) &
      mask << endl;
}
int rotr(int width, int a, int n) {
  if (n < 0) {
    return rotl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << width) - 1;
    a %= width;
    return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n)));
  }
}
int rotl(int width, int a, int n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << width) - 1;
    a %= width;
    return ((a << n) | (a >> (width - n)));
  }
}
int asr(int width, int a, int n) {
  if (n < 0) {
    return asl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << (width - 1)) - 1;
    int signBit = a >> (width - 1);
    return ((signBit << (width - n)) | (a >> n));
  }
}
int asl(int width, int a, int n) {
  if (n < 0) {
    return asr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    int mask = (1 << width) - 1;
    return ((a << n) | (a >> (width - n)));
  }
}
void helperFuncs(int width, int a) {
  cout << "    AND:     0b" << setw(width) << setfill('0') << a << " & 0b"
       << setw(width) << setfill('0') << (a & (1 << width) - 1) << " = 0b"
       << setw(width) << setfill('0') << (a & (1 << width) - 1) << endl;
  cout << "    OR:      0b" << setw(width) << setfill('0') << a << " | 0b"
       << setw(width) << setfill('0') << (a | (1 << width) - 1) << " = 0b"
       << setw(width) << setfill('0') << (a | (1 << width) - 1) << endl;
  cout << "    XOR:     0b" << setw(width) << setfill('0') << a << " ^ 0b"
       << setw(width) << setfill('0') << (a ^ (1 << width) - 1) << " = 0b"
       << setw(width) << setfill('0') << (a ^ (1 << width) - 1) << endl;
  cout << "    NOT:   ~ 0b" << setw(width) << setfill('0') << a << " = 0b"
       << setw(width) << setfill('0') << (~a & mask) << endl;
}
int main() {
  bitwiseBuiltIns(8, 27, 125);
  helperFuncs(8, 27);
  return 0;
}