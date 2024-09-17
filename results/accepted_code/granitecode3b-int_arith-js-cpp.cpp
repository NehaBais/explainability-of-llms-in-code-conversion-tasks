#include
#include
using namespace std;
int main(int argc, char *argv[]) {
  if (argc < 4) {
    cout << "Usage: " << argv[0] << " a b" << endl;
    return 1;
  }
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division = static_cast(a) / static_cast(b);
  int remainder = a % b;
  if (b == 0) {
    cout << "Error: Division by zero" << endl;
    return 1;
  }
  cout << "a + b = " << sum << endl;
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;
  cout << "a / b = " << division << endl;
  if (remainder < 0) {
    remainder += b;
  }
  cout << "a % b = " << remainder << endl;
  return 0;
}