#include
#include
using namespace std;
int main() {
  const char *extra = "little";
  string str = "Mary had a " + string(extra) + " lamb.";
  cout << str << endl;
  return 0;
}