#include
#include
using namespace std;
string substring(const string &s, size_t n, ptrdiff_t m) {
  string result;
  /* check for null s */
  if (s.empty())
    return "";
  /* negative m to mean 'up to the mth char from right' */
  if (m < 0)
    m = s.size() + m - n + 1;

  /* n < 0 or m < 0 is invalid */
  if (n < 0 || m < 0)
    return "";

  /* make sure string does not end before n
   * and advance the "s" pointer to beginning of substring */
  for (; n > 0; s++, n--)
    if (*s == char(0))
      /* string ends before n: invalid */
      return "";

  result.resize(m);
  strncat(&result[0], &s[0],
          m); /* strncat() will automatically add null terminator
               * if string ends early or after reading m characters */
  return result;
}
string str_wholeless1(const string &s) { return substring(s, 0, s.size() - 1); }
string str_fromch(const string &s, char ch, ptrdiff_t m) {
  size_t pos = s.find(ch);
  if (pos == string::npos)
    return "";
  return substring(s, pos, m);
}
string str_fromstr(const string &s, const string &in, ptrdiff_t m) {
  size_t pos = s.find(in);
  if (pos == string::npos)
    return "";
  return substring(s, pos, m);
}
int main() {
  const string s = "hello world shortest program";

  cout << substring(s, 12, 5) << endl;     // get "short"
  cout << substring(s, 6, -1) << endl;     // get "world shortest program"
  cout << str_wholeless1(s) << endl;       // "... progra"
  cout << str_fromch(s, 'w', 5) << endl;   // "world"
  cout << str_fromstr(s, "ro", 3) << endl; // "rog"

  return 0;
}