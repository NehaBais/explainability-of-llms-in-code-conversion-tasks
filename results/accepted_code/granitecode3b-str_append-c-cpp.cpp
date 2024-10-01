#include
using namespace std;

int main() {
  string str = "Good Morning";
  string cstr = " to all";
  string cstr2 = " !!!";
  int x = 0;

  if (str.length() > str.size() + cstr.size() + cstr2.size()) {
    // Failure when space allocated to str is insufficient.

    // 1st method
    str += cstr;

    // 2nd method
    x = str.size();
    str.insert(x, cstr2);

    cout << str << endl;
  }

  return 0;
}