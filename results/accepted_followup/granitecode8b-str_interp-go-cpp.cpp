#include
#include
using namespace std;
int main() {
  string str = "Mary had a %s lamb";
  string txt = "little";
  string out = fmt.Sprintf(str, txt);
  cout << out << endl;
  return 0;
}