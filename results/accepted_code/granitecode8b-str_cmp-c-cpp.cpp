/*
  compilation and test in bash
  $ a=./cpp && make $a && $a ball bell ball ball YUP YEP     ball BELL ball BALL
  YUP yep g++ -Wall -c -o cpp.o cpp.cpp eq , ne , gt , lt , ge , le ball 0 1 0 1
  0 1 bell ball 0 1 0 1 0 1 bell ignoring case ball 1 0 0 0 1 1 ball ball 1 0 0
  0 1 1 ball ignoring case YUP 0 1 1 0 1 0 YEP YUP 0 1 1 0 1 0 YEP ignoring case
  ball 0 1 1 0 1 0 BELL
  ball 0 1 0 1 0 1 BELL ignoring case
  ball 0 1 1 0 1 0 BALL
  ball 1 0 0 0 1 1 BALL ignoring case
  YUP 0 1 0 1 0 1 yep
  YUP 0 1 1 0 1 0 yep ignoring case
*/
#include <iostream>
#include <string>
using namespace std;
bool STREQ(const string &a, const string &b) { return a == b; }
bool STRNE(const string &a, const string &b) { return a != b; }
bool STRGT(const string &a, const string &b) { return a > b; }
bool STRLT(const string &a, const string &b) { return a < b; }
bool STRGE(const string &a, const string &b) { return a >= b; }
bool STRLE(const string &a, const string &b) { return a <= b; }
bool STRCEQ(const string &a, const string &b) { return a == b; }
bool STRCNE(const string &a, const string &b) { return a != b; }
bool STRCLT(const string &a, const string &b) { return a < b; }
bool STRCLE(const string &a, const string &b) { return a <= b; }
bool STRCGT(const string &a, const string &b) { return a > b; }
bool STRCGE(const string &a, const string &b) { return a >= b; }
int main(int ac, char *av[]) {
  string a, b;
  cout << "	eq , ne , gt , lt , ge , le" << endl;
  while (0 < (ac -= 2)) {
    a = *++av, b = *++av;
    cout << a << "\t" << STREQ(a, b) << "," << STRNE(a, b) << "," << STRGT(a, b)
         << "," << STRLT(a, b) << "," << STRGE(a, b) << "," << STRLE(a, b)
         << "\t" << b << endl;
    cout << a << "\t" << STRCEQ(a, b) << "," << STRCNE(a, b) << ","
         << STRCGT(a, b) << "," << STRCLT(a, b) << "," << STRCGE(a, b) << ","
         << STRCLE(a, b) << "\t" << b << " ignoring case" << endl;
  }
  return 0;
}