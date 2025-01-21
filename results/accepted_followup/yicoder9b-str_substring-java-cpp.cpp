#include <string>
using namespace std;

// function to return substring from n index till end
string substr_from(const string &str, int n) {
  return string(str.begin() + n, str.end());
}

// function to return substring upto n index
string substr_upto(const string &str, int n) {
  return string(str.begin(), str.begin() + n);
}

int main() {
  string str = "Hello World!";
  auto pos = str.find(' '); // find the position of space in string
  if (pos == string::npos) {
    // do nothing if no space found
  } else {
    // print substring from space index till end
    cout << substr_from(str, pos + 1) << "\n";
  }

  pos = str.find('!'); // find the position of '!' in string
  if (pos == string::npos) {
    // do nothing if no '!' found
  } else {
    // print substring upto '!' index
    cout << substr_upto(str, pos + 1) << "\n";
  }
  return 0;
}