#include <algorithm> // For std::equal with custom comparator for case-insensitive comparison
#include <cstring>
#include <iostream>

#define STREQ(A, B) (strcmp((A), (B)) == 0)
#define STRNE(A, B) (strcmp((A), (B)) != 0)
#define STRLT(A, B) (strcmp((A), (B)) < 0)
#define STRLE(A, B) (strcmp((A), (B)) <= 0)
#define STRGT(A, B) (strcmp((A), (B)) > 0)
#define STRGE(A, B) (strcmp((A), (B)) >= 0)

#define STRCEQ(A, B) (strcasecmp((A), (B)) == 0)
#define STRCNE(A, B) (strcasecmp((A), (B)) != 0)
#define STRCLT(A, B) (strcasecmp((A), (B)) < 0)
#define STRCLE(A, B) (strcasecmp((A), (B)) <= 0)
#define STRCGT(A, B) (strcasecmp((A), (B)) > 0)
#define STRCGE(A, B) (strcasecmp((A), (B)) >= 0)

void compare(const char *a, const char *b) {
  std::cout << a << " " << STREQ(a, b) << " " << STRNE(a, b) << " "
            << STRGT(a, b) << " " << STRLT(a, b) << " " << STRGE(a, b) << " "
            << STRLE(a, b) << " " << b << std::endl;
}

void comparecase(const char *a, const char *b) {
  std::cout << a << " " << STRCEQ(a, b) << " " << STRCNE(a, b) << " "
            << STRCGT(a, b) << " " << STRCLT(a, b) << " " << STRCGE(a, b) << " "
            << STRCLE(a, b) << " " << b << " ignoring case" << std::endl;
}

int main(int ac, char *av[]) {
  if (ac < 2) {
    std::cerr << "Usage: " << av[0] << " string1 string2 [...]\n";
    return 1;
  }

  std::cout << "\t eq , ne , gt , lt , ge , le" << std::endl;
  for (int i = 1; i < ac; i += 2) {
    const char *a = av[i];
    const char *b = av[i + 1];
    compare(a, b);
    comparecase(a, b);
  }
  return 0;
}