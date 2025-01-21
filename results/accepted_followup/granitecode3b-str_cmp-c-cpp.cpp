#include ""
using namespace std;
int main() {
  string a = "ball", b = "bell";
  cout << left << setw(20) << "a" << setw(10) << "STREQ(a,b)" << setw(10)
       << STREQ(a, b);
  cout << left << setw(20) << a << setw(10) << STREQ(a, b) << setw(10)
       << STRLT(a, b);
  cout << left << setw(20) << a << setw(10) << STREQ(a, b) << setw(10)
       << STRLE(a, b) << endl;
}