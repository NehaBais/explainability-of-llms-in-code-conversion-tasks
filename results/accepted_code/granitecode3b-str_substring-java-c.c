#include
#include
using namespace std;

string substring(string str, int n, int m) { return str.substr(n, m); }

string substring(string str, int n) { return str.substr(n); }

string substring(string str) { return str.substr(0, str.length() - 1); }

string substring(string str, char c, int m) {
  return str.substr(str.find(c), str.find(c) + m + 1);
}

string substring(string str, string sub, int m) {
  return str.substr(str.find(sub), str.find(sub) + m + 1);
}

int main() {
  string str = "Hello, world!";
  cout << substring(str, 2, 4) << endl;    // Output: ello
  cout << substring(str, 7) << endl;       // Output: !
  cout << substring(str) << endl;          // Output: Helloworld
  cout << substring(str, 'o', 3) << endl;  // Output: llo
  cout << substring(str, "or", 2) << endl; // Output: ell
  return 0;
}