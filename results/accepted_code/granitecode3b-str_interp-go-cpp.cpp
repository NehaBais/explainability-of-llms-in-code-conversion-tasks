#include
#include
using namespace std;
int main() {
  string str = "Mary had a %s lamb";
  string txt = "little";
  string out = str.replace("%s", txt);
  cout << out << endl;
  return 0;
}