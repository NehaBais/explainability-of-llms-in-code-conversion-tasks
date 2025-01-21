#include
#include
using namespace std;
int main() {
  string s = "12345678";
  s = "0" + s; // by concatenation
  cout << s << endl;
  return 0;
}