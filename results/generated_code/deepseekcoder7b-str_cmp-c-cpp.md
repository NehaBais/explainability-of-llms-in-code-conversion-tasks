Your code is already in C++. It uses the built-in `strcmp` and `strcasecmp` functions of the string library to perform case sensitive and case insensitive comparisons respectively. The macros STREQ, STRNE, STRLT, etc., use these functions to compare strings a and b.

Here is your code for reference:
```cpp
#include<string.h>

#define STREQ(A,B)  (0==strcmp((A),(B)))
#define STRNE(A,B) (!STREQ(A,B))
#define STRLT(A,B) (strcmp((A),(B))<0)
#define STRLE(A,B) (strcmp((A),(B))<=0)
#define STRGT(A,B) STRLT(B,A)
#define STRGE(A,B) STRLE(B,A)

#define STRCEQ(A,B)  (0==strcasecmp((A),(B)))
#define STRCNE(A,B) (!STRCEQ(A,B))
#define STRCLT(A,B) (strcasecmp((A),(B))<0)
#define STRCLE(A,B) (strcasecmp((A),(B))<=0)
#define STRCGT(A,B) STRCLT(B,A)
#define STRCGE(A,B) STRCLE(B,A)

#include<iostream>
using namespace std;

void compare(const char*a, const char*b) {
  cout << a << " "
       << STREQ(a,b) << " " << STRNE(a,b) << " " << STRGT(a,b) << " " << STRLT(a,b) << " " << STRGE(a,b) << " " << STRLE(a,b) << "  "
       << b << endl;
}
void comparecase(const char*a, const char*b) {
  cout << a << " "
       << STRCEQ(a,b) << " " << STRCNE(a,b) << " " << STRCGT(a,b) << " " << STRCLT(a,b) << " " << STRCGE(a,b) << " " << STRCLE(a,b) << "  "
       << b << " ignoring case" << endl;
}
int main(int ac, char*av[]) {
  cout << "	eq  ne  gt  lt  ge  le\n";
  while (0 < (ac -= 2)) {
    const char *a = *++av, *b = *++av;
    compare(a, b);
    comparecase(a, b);
  }
  return <｜begin▁of▁sentence｜>0<std::endl;
}
```

