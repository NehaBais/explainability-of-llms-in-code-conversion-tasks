#include
#include
using namespace std;
int main() {
  unsigned char a = 105;
  unsigned char b = 91;
  cout << "a      = " << setfill('0') << setw(8) << binary << a << endl;
  cout << "b      = " << setfill('0') << setw(8) << binary << b << endl;
  cout << "a | b  = " << setfill('0') << setw(8) << binary << (a | b) << endl;
  cout << "a & b  = " << setfill('0') << setw(8) << binary << (a & b) << endl;
}