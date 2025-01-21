#include
#include
#include
#include
#include
using namespace std;

int main() {
  string s1 = "hello";
  cout << s1 + " world" << endl;
  string s2 = s1 + " world";
  cout << s2 << endl;
  vector words = {"hello", "world", "mom"};
  string s3 = ", ".join(words);
  cout << s3 << endl;
  return 0;
}