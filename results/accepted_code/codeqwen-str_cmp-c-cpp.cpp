#include <iostream>
#include <string>

#define STREQ(A, B) ((A).compare((B)) == 0)
#define STRNE(A, B) (!STREQ(A, B))
#define STRLT(A, B) ((A).compare((B)) < 0)
#define STRLE(A, B) (STRLT(A, B) || STREQ(A, B))
#define STRGT(A, B) (!STRLT(A, B) && !STREQ(A, B))
#define STRGE(A, B) (!STRLT(A, B))

int main() {
  std::string A, B;
  puts("	eq , ne , gt , lt , ge , le");
  while (std::cin >> A >> B) {
    compare(A, B);
  }
  return 0;
}