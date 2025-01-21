#include
#include
using namespace std;
char *Substring(const char *str, int n, int m) {
  return new string(str + n, m).c_str();
}
char *Substring(const char *str, int n) { return new string(str + n).c_str(); }
char *Substring(const char *str) {
  return new string(str, strlen(str) - 1).c_str();
}
int main() {
  // Test the Substring function
  const char *input = "Hello, world!";
  int pos = input;
  char *output = Substring(input, pos, 5);
  cout << output << endl; // Output: Hello
  return 0;
}