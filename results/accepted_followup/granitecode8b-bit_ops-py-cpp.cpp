#include
using namespace std;
int main() {
  int width = 8;
  int a = 0b10101010;
  int b = 0b01010101;

  cout << "    AND:     0b" << setw(width) << setfill('0') << a << " & 0b"
       << setw(width) << setfill('0') << b << " = 0b" << setw(width)
       << setfill('0') << (a & b) << endl;
  cout << "    OR:      0b" << setw(width) << setfill('0') << a << " | 0b"
       << setw(width) << setfill('0') << b << " = 0b" << setw(width)
       << setfill('0') << (a | b) << endl;
  cout << "    XOR:     0b" << setw(width) << setfill('0') << a << " ^ 0b"
       << setw(width) << setfill('0') << b << " = 0b" << setw(width)
       << setfill('0') << (a ^ b) << endl;

  return 0;
}