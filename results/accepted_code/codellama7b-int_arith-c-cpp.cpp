#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int a, b;
  if (argc < 3)
    exit(1);
  b = atoi(argv[--argc]);
  if (b == 0)
    exit(2);
  a = atoi(argv[--argc]);
  cout << "a+b = " << a + b << endl;
  cout << "a-b = " << a - b << endl;
  cout << "a*b = " << a * b << endl;
  cout << "a/b = " << a / b << endl; // truncates towards 0 (in C99)
  cout << "a%b = " << a % b << endl; // same sign as first operand (in C99)
  return 0;
}