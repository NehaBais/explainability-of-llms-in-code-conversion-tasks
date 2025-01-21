#include
#include
using namespace std;

void printLogic(bool a, bool b) {
  cout << "a and b is " << (a && b) << endl;
  cout << "a or b is " << (a || b) << endl;
  cout << "not a is " << !a << endl;
}

int main() {
  bool a = true;
  bool b = false;
  printLogic(a, b);
  return 0;
}