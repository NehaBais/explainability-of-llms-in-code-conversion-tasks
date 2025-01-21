#include <locale>
#include <string>

using namespace std;

int cmp(string s1, string s2) { return s1.compare(s2); } // Corrected line

int main() {
  auto cmp = [&](string s1, string s2) { return s1.compare(s2); };

  string A = "Hello";
  string B = "World";
  if (cmp(A, B)) {        /* code for when A < B */
  } else if (cmp(B, A)) { /* code for when A > B */
  } else {                /* code for when A == B */
  }

  // Other lines of code...
}