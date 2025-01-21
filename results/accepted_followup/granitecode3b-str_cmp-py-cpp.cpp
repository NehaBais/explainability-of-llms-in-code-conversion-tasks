#include
#include
#include
using namespace std;
int main() {
  string a = "YUP";
  string b = "YUP";
  cout << a << " is of type " << typeid(a).name() << endl;
  cout << b << " is of type " << typeid(b).name() << endl;
  if (a < b) {
    cout << a << " is strictly less than  " << b << endl;
  }
  if (a <= b) {
    cout << a << " is less than or equal to " << b << endl;
  }
  if (a > b) {
    cout << a << " is strictly greater than  " << b << endl;
  }
  if (a >= b) {
    cout << a << " is greater than or equal to " << b << endl;
  }
  if (a == b) {
    cout << a << " is equal to " << b << endl;
  }
}