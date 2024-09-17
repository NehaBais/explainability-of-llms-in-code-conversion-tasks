#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 4) {
    cerr << "Usage: ./program_name <A> <p>\n";
    return 1;
  }

  int A = stoi(argv[2]);
  int b = stoi(argv[3]);

  int sum = A + b;
  int difference = A - b;
  int product = A * b;
  float division = static_cast<float>(A) / b;
  int remainder = A % b;

  cout << "A + b = " << sum << endl;
  cout << "A - b = " << difference << endl;
  cout << "A * b = " << product << endl;
  cout << "A / b = " << division << endl;
  cout << "A % b = " << remainder << endl;

  return 0;
}