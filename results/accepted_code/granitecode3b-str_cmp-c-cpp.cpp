#include
#include
using namespace std;

int main() {
  string a = "ball", b = "bell";

  cout << left << setw(20) << "a" << setw(10) << "STREQ(a,b)" << setw(10)
       << "STRNE(a,b)" << setw(10) << "STRLT(a,b)" << setw(10) << "STRLE(a,b)"
       << endl;
  cout << left << setw(20) << a << setw(10) << STREQ(a, b) << setw(10)
       << STRNE(a, b) << setw(10) << STRLT(a, b) << setw(10) << STRLE(a, b)
       << endl;
  cout << left << setw(20) << a << setw(10) << STREQ(a, b) << setw(10)
       << STRNE(a, b) << setw(10) << STRLT(a, b) << setw(10) << STRLE(a, b)
       << endl;
  cout << left << setw(20) << b << setw(10) << STREQ(b, a) << setw(10)
       << STRNE(b, a) << setw(10) << STRLT(b, a) << setw(10) << STRLE(b, a)
       << endl;
  cout << left << setw(20) << b << setw(10) << STREQ(b, a) << setw(10)
       << STRNE(b, a) << setw(10) << STRLT(b, a) << setw(10) << STRLE(b, a)
       << endl;
  cout << left << setw(20) << "YUP" << setw(10) << STREQ("YUP", "yep")
       << setw(10) << STRNE("YUP", "yep") << setw(10) << STRLT("YUP", "yep")
       << setw(10) << STRLE("YUP", "yep") << endl;
  cout << left << setw(20) << "YUP" << setw(10) << STREQ("YUP", "yep")
       << setw(10) << STRNE("YUP", "yep") << setw(10) << STRLT("YUP", "yep")
       << setw(10) << STRLE("YUP", "yep") << endl;
  cout << left << setw(20) << b << setw(10) << STREQ(b, "BALL") << setw(10)
       << STRNE(b, "BALL") << setw(10) << STRLT(b, "BALL") << setw(10)
       << STRLE(b, "BALL") << endl;
  cout << left << setw(20) << b << setw(10) << STREQ(b, "BALL") << setw(10)
       << STRNE(b, "BALL") << setw(10) << STRLT(b, "BALL") << setw(10)
       << STRLE(b, "BALL") << endl;
  cout << left << setw(20) << "YUP" << setw(10) << STREQ("yep", "YUP")
       << setw(10) << STRNE("yep", "YUP") << setw(10) << STRLT("yep", "YUP")
       << setw(10) << STRLE("yep", "YUP") << endl;
  cout << left << setw(20) << "YUP" << setw(10) << STREQ("yep", "YUP")
       << setw(10) << STRNE("yep", "YUP") << setw(10) << STRLT("yep", "YUP")
       << setw(10) << STRLE("yep", "YUP") << endl;
}