#include
using namespace std;
int main() {
  string str = "my String";
  string cstr = "Changed ";
  string dup = str;
  str = cstr + dup;
  cout << str << endl;
  return 0;
}