#include <string.h>

#define STREQ(A, B) (0 == strcmp((A), (B))))
#define STRNE(A, B) (!STREQ(A, B))))
#define STRLT(A, B) (strcmp((A), (B)) < 0))
#define STRLE(A, B) (strcmp((A), (B)) <= 0))
#define STRGT(A, B) STRLT(B, A)
#define STRGE(A, B) STRLE(B, A)

#define STRCEQ(A, B) (0 == strcasecmp((A), (B))))
#define STRCNE(A, B) (!STRCEQ(A, B))))
#define STRCLT(A, B) (strcasecmp((A), (B)) < 0))
#define STRCLE(A, B) (strcasecmp((A), (B)) <= 0))
#define STRCGT(A, B) STRCLT(B, A)
#define STRCGE(A, B) STRCLE(B, A)

#include <iostream>

void compare(const char *a, const char *b) {
  std::cout << "String 1: " << a << std::endl;
  std::cout << "String 2: " << b << std::endl;

  std::cout << "Equal (case-sensitive): " << STREQ(a, b) << std::endl;
  std::cout << "Not Equal (case-sensitive)): " << STRNE(a, b) << std::endl;
    std::cout << "Less Than: " << STRLT(a, b)) << std::endl;
    std::cout << "Less Or Equal To: " << STRLE(a, b)) << std::endl;
    std::cout << "GreaterThan: " << STRGT(a, b)) << std::endl;
    std::cout << "GreaterOrEqualTo: " << STRGE(a, b)) << std::endl;

    std::cout << std::endl;
}

void comparecase(const char *a, const char *b) {
  std::cout << "String 1 (ignoring case): " << a << std::endl;
  std::cout << "String 2 (ignoring case): " << b << std::endl;

    std::cout << "Equal (case-insensitive): " << STRCEQ(a, b)) << std::endl;
    std::cout << "Not Equal (case-insensitive)): " << STRCNE(a, b)) << std::endl;
    std::cout << "Less Than: " << STRCLT(a, b)) << std::endl;
    std::cout << "Less Or Equal To: " << STRCLE(a, b)) << std::endl;
    std::cout << "GreaterThan: " << STRGT(a, b)) << std::endl;
    std::cout << "GreaterOrEqualTo: " << STRGE(a, b)) << std::endl;

    std::cout << std::endl;
}

int main() {
  char *a, *b;
  puts("	eq 	ne 	gt 	lt 	ge 	le");
  while (0 < std::cin.getline(a, '\n'), a))) {
        std::cin.getline(b, '\n'), b);
        compare(a, b);
        comparecase(a, b);
    }

  return 0;
}