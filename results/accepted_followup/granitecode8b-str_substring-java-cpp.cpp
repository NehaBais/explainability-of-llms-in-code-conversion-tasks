#include <string>
using namespace std;

string Substring(string str, char c, int m) {
  string::size_type pos = str.find(c);
  if (pos != string::npos) {
    return str.substr(0, pos + m);
  } else {
    return "";
  }
}