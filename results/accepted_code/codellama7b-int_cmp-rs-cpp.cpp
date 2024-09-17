#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string line;
  vector<int> nums;
  int a, b;

  // Get two integers from the user
  cout << "Enter two integers: ";
  while (getline(cin, line)) {
    if (isdigit(line[0])) {
      nums.push_back(stoi(line));
    } else {
      break;
    }
  }

  // Check if the first integer is less than, equal to, or greater than the
  // second integer
  a = nums[0];
  b = nums[1];
  if (a < b) {
    cout << "The first number is less than the second number" << endl;
  } else if (a == b) {
    cout << "The first number is equal to the second number" << endl;
  } else if (a > b) {
    cout << "The first number is greater than the second number" << endl;
  }

  return 0;
}