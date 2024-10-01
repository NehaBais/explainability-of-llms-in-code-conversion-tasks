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
char *Substring(const char *str, char c, int m) {
  string::size_type pos = 0;
  while ((pos = string(str).find(c, pos)) != string::npos && pos < n) {
    pos++;
  }
  return new string(str + pos, m + 1).c_str();
}
char *Substring(const char *str, const char *sub, int m) {
  string::size_type pos = 0;
  while ((pos = string(str).find(sub, pos)) != string::npos && pos < n) {
    pos++;
  }
  return new string(str + pos, m + 1).c_str();
}
int main() {
  const char *str = "Hello, world!";
  int n = 7;
  int m = 5;
  cout << Substring(str, n, m) << endl; // "world"
  cout << Substring(str, n) << endl;    // "world!"
  cout << Substring(str) << endl;       // "Hello, world"
  char c = 'o';
  int m2 = 3;
  cout << Substring(str, c, m2) << endl; // "llo, "
  string sub = "or";
  cout << Substring(str, sub.c_str(), m2) << endl; // "ld!"
  return 0;
}