/*
  compilation and test in bash
  $ g++ -o c.o c.cpp && ./c o ball bell ball ball YUP YEP     ball BELL ball
  BALL YUP yep eq , ne , gt , lt , ge , le ball 0 1 0 1 0 1 bell ball 0 1 0 1 0
  1 bell ignoring case ball 1 0 0 0 1 1 ball ball 1 0 0 0 1 1 ball ignoring case
  YUP 0 1 1 0 1 0 YEP
  YUP 0 1 1 0 1 0 YEP ignoring case
  ball 0 1 1 0 1 0 BELL
  ball 0 1 0 1 0 1 BELL ignoring case
  ball 0 1 1 0 1 0 BALL
  ball 1 0 0 0 1 1 BALL ignoring case
  YUP 0 1 0 1 0 1 yep
  YUP 0 1 1 0 1 0 yep ignoring case
*/

#include <algorithm>
#include <string>

using namespace std;

void compare(const string &a, const string &b) {
  printf("%s%2d%2d%2d%2d%2d%2d %s\n", a.c_str(), a == b, a != b, a > b, a < b,
         a >= b, a <= b, b.c_str());
}
void comparecase(const string &a, const string &b) {
  printf("%s%2d%2d%2d%2d%2d%2d %s ignoring case\n", a.c_str(),
         equal(a.begin(), a.end(), b.begin(),
               [](int c1, int c2) { return tolower(c1) == tolower(c2); }),
         !equal(a.begin(), a.end(), b.begin(),
                [](int c1, int c2) { return tolower(c1) == tolower(c2); }),
         lexicographical_compare(
             b.begin(), b.end(), a.begin(), a.end(),
             [](char c1, char c2) { return tolower(c1) < tolower(c2); }),
         lexicographical_compare(
             a.begin(), a.end(), b.begin(), b.end(),
             [](char c1, char c2) { return tolower(c1) < tolower(c2); }),
         !lexicographical_compare(
             b.begin(), b.end(), a.begin(), a.end(),
             [](char c1, char c2) { return tolower(c1) < tolower(c2); }) &&
             a.size() == b.size(),
         !lexicographical_compare(
             a.begin(), a.end(), b.begin(), b.end(),
             [](char c1, char c2) { return tolower(c1) < tolower(c2); }) &&
             a.size() == b.size(),
         b.c_str());
}
int main(int ac, char *av[]) {
  string a, b;
  puts("eq , ne , gt , lt , ge , le");
  while (ac > 4) {
    a = av[1], b = av[2];
    compare(a, b);
    comparecase(a, b);
    av += 2;
    ac -= 2;
  }
  return 0;
}